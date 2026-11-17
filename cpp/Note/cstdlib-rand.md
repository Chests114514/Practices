# cstdlib - rand()

## 1. Set a random seed

Before you start to use `rand()`, you need to set a random seed, it will always be a same number if you don't set a random seed.

Using the current time as the seed is recommended.

```cpp
#include <cstdlib>
#include <ctime>

int main() {
        std::srand(std::time(nullptr));
        ...
}
```

you only need to set once in the whole file *(unless you're sure that the program is running slow enough, or you will get same numbers because the program run too fast, it's still the same time)*, the seed is universal.

## 2. Generate random number

You can use different range:

### 2.1. Whole number [0, n-1]

```cpp
int r = rand() % n;
```

the answer need to be mod n because `rand()` could return any number in the range of `int`, so we need to mod it to make sure that the range is only 0 to n-1.

### 2.2. Whole number [0, n]

```cpp
int r = rand() % (n + 1);
```

based on 2.1, we can add 1 at the modding number to make the range is 0 to n.

### 2.3. Whole number range [a, b]

```cpp
int r = a + rand() % (b - a + 1);
```

for better explaination, we make an example:  
random number between 1 to 100

```cpp
int r = 1 + rand() % (100 - 1 + 1);
```

So we separate it:

- `1 +`
- `rand() %`
- `(100 - 1 + 1)`

`(100 - 1 + 1)` makes the range could only include 100 numbers, it give the range to `rand()`, but now, it will generate a number between 0 to 99, so we need to add 1 to make a offset manually, so it always add 1 to the answer, then the range is 1 to 100.

### 2.4. Float range [0, 1)

```cpp
double r = rand() / (RAND_MAX + 1.0);
```

use `RAND_MAX + 1.0` to make sure it could take 0

### 2.5. Float range [0, 1]

```cpp
double r = rand() / static_cast<double>(RAND_MAX);
```

the solution is always devided by RAND_MAX, the number that `rand()` generated is always lower then RAND_MAX, while a <= b, so a / b < 1

### 2.6. Float range [a, b]

```cpp
double r = a + (b - a) * rand() / static_cast<double>(RAND_MAX);
```

based on 2.3, this basically just change the method of limit into RAND_MAX