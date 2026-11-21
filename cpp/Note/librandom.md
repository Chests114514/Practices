# librandom

## 1. Set a random seed

Before you start to use `<random>`, you need to create a random engine and give it a seed. If you don't seed it, the engine uses a fixed default seed (`5489` for `std::mt19937`), so you get the same sequence of numbers every time the program runs.

Using `std::random_device` as the seed source is recommended. It asks the operating system for real randomness. The current time (`std::time(nullptr)`) also works as a fallback, but it changes only once per second, so two runs within the same second get the same numbers.

```cpp
#include <random>

int main() {
    std::random_device rd;   // non-deterministic seed source
    std::mt19937 gen(rd());  // Mersenne Twister engine, seeded once
    // ...
}
```

You only need to create and seed the engine once per program, not once per function. The Mersenne Twister has a period of 2^19937 - 1, so you will never run out of numbers. Create one engine and pass it by reference (`std::mt19937&`) to the functions that need it. Don't create a new engine inside a function that is called many times: that is slow, and if you seed it with the time, each call can return the same number.

> Tip: for debugging, seed with a fixed number (for example `std::mt19937 gen(42);`) so every run gives the same results and bugs are reproducible.

> Note: `std::random_device` can be deterministic on a few old compilers (old MinGW on Windows). On modern compilers it is fine.

## 2. Choose a distribution

The engine only produces raw numbers. A distribution turns them into the range or shape you want. You can use different ways to get a random number:

### 2.1. Uniform integer distribution [a, b]

```cpp
std::uniform_int_distribution<int> dist(a, b);
int x = dist(gen);
```

The first line creates a distribution object, where `a` and `b` are the range. Both ends are included. The second line calls the distribution with the engine and saves the result in `x`.

Unlike `rand() % n`, this has no modulo bias: every number in [a, b] is equally likely.

### 2.2. Uniform real-number distribution [a, b)

```cpp
std::uniform_real_distribution<double> dist(0.0, 1.0);
double x = dist(gen);
```

Here the upper bound is not included, so this example gives a number in [0, 1).

### 2.3. Normal distribution

```cpp
std::normal_distribution<double> dist(0.0, 1.0); // mean 0, standard deviation 1
double x = dist(gen);
```

### 2.4. Bernoulli distribution

```cpp
std::bernoulli_distribution dist(0.7); // true with 70% probability
bool b = dist(gen);
```

> A distribution object is cheap to create, and you can reuse it as many times as you like. The C++ standard fixes the exact output of the engines but not of the distributions, so the same seed can give different results on different compilers.

## 3. Examples

### 3.1. Shuffle a deck of cards

```cpp
#include <algorithm>
#include <random>
#include <vector>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::vector<int> v = {1, 2, 3, 4, 5};
    std::shuffle(v.begin(), v.end(), gen);
}
```

Statements like `shuffle(...)` must be inside a function, otherwise the code does not compile. Avoid `using namespace std;` at global scope, because it can cause name clashes.

### 3.2. Random selection from an array

```cpp
#include <cassert>
#include <random>
#include <vector>

template <typename T>
const T& randomChoice(const std::vector<T>& v, std::mt19937& gen) {
    assert(!v.empty()); // v.size() - 1 would underflow on an empty vector
    std::uniform_int_distribution<std::size_t> dist(0, v.size() - 1);
    return v[dist(gen)];
}
```

### 3.3. Generate a random string

```cpp
#include <random>
#include <string>

std::string randomString(std::size_t len, std::mt19937& gen) {
    static const char charset[] =
        "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    // sizeof(charset) includes the trailing '\0', so the last valid index is sizeof - 2
    std::uniform_int_distribution<std::size_t> dist(0, sizeof(charset) - 2);
    std::string s(len, ' ');
    for (auto& c : s) c = charset[dist(gen)];
    return s;
}
```

### 3.4. Random loot in games

```cpp
// Pick with weights: Normal 60%, Rare 30%, Legendary 10%
std::discrete_distribution<int> drop({60, 30, 10});
int item = drop(gen);  // 0 = normal, 1 = rare, 2 = legendary
```

The weights don't need to add up to 100; they are relative. `{6, 3, 1}` gives the same result.
