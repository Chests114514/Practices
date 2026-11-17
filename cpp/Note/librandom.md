# librandom

## 1. Set a random seed

Before you start to use `<random>`, you need to set a random seed, it will always be a same number if you don't set a random seed.

Using the current time as the seed is recommended.

```cpp
#include <random>

int main() {
        std::random_device rd;
        std::mt19937 gen(rd()); // Mersenne Twister algorithm
        ...
}
```

you only need to set once in the whole file, the mersenne twister algorithm's seed cycle is 2^19937-1, you couldn't use all of them, the seed is universal, so you don't need to generate a new seed while a new function or another random operation.

## 2. Choose a distribution

You can use different way to get a random number:

### 2.1. Uniform integer distribution [a, b]

```cpp
std::uniform_int_distribution<int> dist(a, b);
int x = dist(gen);
```

in the code, the first line make a distribution target, `a` and `b` is the range; and the second line invoke this target and save it to variable `x`

### 2.2. Uniform real-number distribution [0, 1)

```cpp
std::uniform_real_distribution<double> dist(0.0, 1.0);
double x = dist(gen)
```

### 2.3. Normal distribution

```cpp
std::normal_distribution<double> dist(0.0, 1.0); // average 0, std. deviation 1
double x = dist(gen);
```

### 2.4. Bernoulli distribution

```cpp
std::bernoulli_distribution dist(0.7); // 70% possibility true
bool b = dist(gen);
```

## 3. Examples

### 3.1. Shuffle the card

```cpp
#include <random>
#include <vector>
#include <algorithm>

using namespace std;
random_device rd;
mt19937 gen(rd());
vector<int> v = {1, 2, 3, 4, 5};
shuffle(v.begin(), v.end(), gen);
```

### 3.2. Random select in array

```cpp
template <typename T>
const T& randomChoice(const std::vector<T>& v, std::mt19937& gen) {
    std::uniform_int_distribution<size_t> dist(0, v.size() - 1);
    return v[dist(gen)];
}
```

### 3.3. Generate random string

```cpp
std::string randomString(size_t len, std::mt19937& gen) {
    static const char charset[] =
        "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    std::uniform_int_distribution<size_t> dist(0, sizeof(charset) - 2);
    std::string s(len, ' ');
    for (auto& c : s) c = charset[dist(gen)];
    return s;
}
```

### 3.4. Random loot in games

```cpp
// Pick with weights: Normal 60%, Rare 30%, Legendary 10%
std::discrete_distribution<int> drop({60, 30, 10});
int item = drop(gen);  // 0=normal, 1=rare, 2=legendary
```