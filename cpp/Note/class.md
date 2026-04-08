# ***Class***

## 1. Basic Define and Member Permissions

Class is defined by `class`, internal member is default private, this is not same with `struct`
default (public)

```cpp
class example {
        private:                // private member, only can be accessed by this class
                                // Can be omitted, the default permission in class is private
                int privateVar;
                void privateFunc() {}
        
        public:                 // public member, can be accessed by external free
                int publicVar;
                void publicFunc() {
                        privateVar = 10; // internal can access private member
                }
        
        protected:              // protect member, derived classes can access, external can't
                int protectedVar;
};
```

## 2. Instantiation

Class is only a blueprint, you need to create specific target to use

```cpp
int main() {
        example obj;            // scope allocation, leave scope will be destoried automatically
        obj.publicVar = 5;
        obj.publicFunc();

        example* pObj = new MyClass();  // heap allocation, need to destroied manually
        pObj->publicVar = 10;
        delete pObj;            // destroy

        return 0;
}
```

## 3.Struct and Destructor Function

Struct Function: Automatically run when target created, used for initial member parameter
Destructor Function: Automatically run when target destroied , used for release resources

```cpp
class Person {
        public:
                std::string name;
                int age;

                // default struct function (no parameter)
                Person() {
                        name = "Unknown";
                        age = 0;
                        std::cout << "Person created (default)" << std::endl;
                }

                // struct function with parameter (better with init list)
                Person(std::string n, int a) : name(n), age(a) {
                        std::cout << "Person created with params" << std::endl;
                }

                // destructor (no parameter, no return, add "~" before)
                ~Person() {
                        std::cout << "Person destroyed: " << name << std::endl;
                }

                void introduce() {
                        std::cout << "I'm " << name << ", " << age << " years old." << std::endl;
                }
};

int main() {
        Person p1;              // call default struct
        Person p2("Alice", 25); // call with parameter struct
        p2.introduce();
        return 0;               // leave scope, automatically use destructor destroy p1 and p2
}
```

## 4. Position of Member Function Defination

Member function can be defined in class, but also out of class (use scope resoulution operator `::`)

```cpp
class Calculator {
        public:
                // define in class (inplicit inline)
                int add(int a, int b) {
                        return a + b;
                }

                // define out of class (need to define in class)
                int sub(int a, int b);
};

// acomplish out of class
int Calculator::sub(int a, int b) {
        return a - b;
}
```

## 5. Inherit

You can reuse existing classes' code with inherit, C++ supports three types of inherit: `public`, 
`protected` and `private`, the most used is `public` inherit

```cpp
// base class
class Animal {
        public:
                void eat() {
                        std::cout << "Eating..." << std::endl;
                }
};

// derived class (public inherit: the public member in base class is also public in derived class)
class Dog : public Animal {
        public:
                void bark() {
                        std::cout << "Woof!" << std::endl;
                }
};

int main () {
        Dog d;
        d.eat();                // inherit from Animal
        d.bark();               // solution yourself
        return 0;
}
```

## 6. Summary of Access Control
Permission Tag          Class Access            Subclass Access         External Access  
`public`                yes                     yes                     yes  
`protected`             yes                     yes                     no
`private`               yes                     no                      no

## 7. Special Member Function
**Important for C++11/14/17**

C++ complier will default generate some special functions. If need to exquisite control RAM or no
copy, you need to get to know **Rule of Three / Rule of Five**

```cpp
class RuleOfFive {
        public:
                int* data;

                // struct function
                RuleOfFive(int val) : data(new int(val)) {}

                // destructor
                ~RuleOfFive() { delete data; }

                // copy struct function (deep copy)
                RuleOfFile(const RuleOfFive& other) : data(new int(*other.data)) {}

                // copy assignment operators
                RuleOfFive& operator=(const RuleOfFive& other) {
                        if (this != &other) {
                                delete data;
                                data = new int(*other.data);
                        }
                        return *this;
                }

                // active struct function (C++11)
                RuleOfFive(RuleOfFive && other) noexcept : data(other.data) {
                        other.data = nullptr;
                }

                // active assignment operator (C++11)
                RuleOfFive& operator=(RuleOfFive&& other) noexcept {
                        if (this != &other) {
                                delete data;
                                data = other.data;
                                other.data = nullptr;
                        }
                        return *this;
                }
};
```