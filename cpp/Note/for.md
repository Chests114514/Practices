# `for` loop

## 1. Basic `for` loop

The most classic way to write, suitable scene to control times or access index  

```cpp
#include <iostream>

int main()
{
        using namespace std;
        // grammar: `for (init; condition; iteration)`
        for (int i = 0; i < 5; ++i)
        {
                cout << "Current i = " << i << endl;
        }
        // output 0, 1, 2, 3, 4,
        return 0;
}
```

## 2. Scope `for` Loop (Most Recommended!)

Introduced in C++11, used for traversing containters (e.g.: array, vector, string, and more)  

```cpp
#include <iostream>
#include <vector>

int main()
{
        using namespace std;
        vector<int> nums = {10, 20, 30, 40};

        // read-only traversing: `const auto&` to avoid of copy, higher efficiency
        for (const auto& val : nums) {
                cout << val << " ";
        }
        cout << endl;

        // write traversing: `auto&` calling
        for (auto& val : nums) {
                val *= 2;
        }
        // nums is now {20, 40, 60, 80}
        return 0;
}
```

## 3. Iterator Loop (old STL)

Basic way to code before C++11, now is been taken by scope `for`, but still valuable on
scenes that needs delete elements  

```cpp
#include <iostream>
#include <vector>

int main()
{
        using namespace std;
        vector<int> vec = {1, 2, 3, 4};
        for (auto it = vec.begin(); it != vec.end(); ++it) {
                cout << *it << " ";
        }
        return 0;
}
```

## 4. Key Skills

### Infnite Loop
without a condition is a infinite loop

```cpp
for (;;) {
        // need to exit with `break`
}
```

### Length Calculating Trap
put `i < vec.size()` in condition is okay, but **DON'T** add too much elements in 
loop to `vector` cause re-allocation, or `size()` change may cause infnite loop

### Effciency Contrast
| Function | To Use |
|:-|:-|
| Traversing | Use scope `for` |
|:-|:-|
| Need Subscript Calculate | Use basic `for` |
|:-|:-|
| Reverse Order Traversing | `for (int i = vec.size() - 1; i >= 0; --i)` |