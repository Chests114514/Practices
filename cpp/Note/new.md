# New

## What is new

In normal, you init a variable in a function:

```cpp
int main() {
        int a = 111;
        return 0;
}
```

The variable a doesn't exists while the `main()` function quits anymore.

But if you use `new`

```cpp
int main() {
        int * a = new int;
        return 0;
}
```

By doing this, the variable still avaliable while the `main()` function quits.

You will need to put `new` on a pointer variable is because `new` returns a location in the RAM instead of creating a symlink.

The variable still avaliable until you do this:


```cpp
        ...
        delete a;
        a = nullptr;
        ...
```

First, you `delete` the variable a, this frees the memory which `new` have allocated.

Second, you `a = nullptr` the variable, this is not necessary but recommended, it's for if you accidently use this variable again,
it will just get the context in the same memory address, but it could be everything now, which can cause anything and every fatal
error.

## Why you should use new

While the current function is going to quit, and a really big variable which you still need to keep, you use new, don't try to tr
ansfer this variable to elsewhere, because that uses a lot of resources, for example:

```cpp
int example(int a) {
        ...
}
int main() {
        int num = 1000000000
        int a[num];
        example(a);             // don't do this! this costs num * 2 of resources!
        return 0;
}
```

Also, while you don't know how long should this variable should hold avaliabe, you should also use `new`.