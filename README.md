# C++

Compiler -> minGw ( g++ compiler )
C++ is statically-typed language -- means the type of variable determined during compilation. Also most of the C programs can compiled with C++ compiler as C++ builds upon the feature of C.

# Why C++

1. High performance and efficiency
2. Portable -> support diff. architectures without doing major changes
3. OOPS -> design program using classes and objects
4. Both low-level (memory manipulation) and high-level (high-level abstractions, STL, Boost and Qt)

# C vs C++

Procedural || Procedural and OOPS
Manual Memory management -- malloc, free || Memory management can be manual or rely on constructors/destructors
Functions & Modular Programming || Code Reusability - classes, inheritance, polymorphism
High cohesion and low coupling, headers -- function libraries || namespaces and well desgined object-orineted hierarchy
No built-in error catching || Enables Error handling throught -- try, catch, throw keywords

## Operators

#### 1.Arithmetic Operators

1.1 Unary -> ++, --

1.2 Binray -> +, -, \*, /, %

#### 2.Relational Operators -> ==, >, >=, <, <=, !=

#### 3.Logical Operators -> &&, ||, !

#### 4.Bitwise Operators -> &, |, ^, <<, >>, ~(one's complement)

#### 5.Assignment Operators -> =, +=, -=, %=, /=

#### 6.Ternary or Conditional Operators -> exp1 ? exp2 : exp3

#### 7. Other Operators

1.  sizeof( )
2.  ->(to access vars of classes or structures)
3.  (int) [cast operator]
4.  (.) [Dot Operator] (to access members of classes or structures in c++)
5.  & Operator -- [represent the memory address]
6.  "\*" Operator -- [Indirection Operator]
7.  << -- [Insertion Operator] -- used with cout to print the output
8.  (>>)-- [Extraction Operator] -- used with cin to get the input.

Link : ( Also Check Precedence --> Generally Left to Right )
https://www.geeksforgeeks.org/operators-in-cpp/

## Functions

A function is a group of statements that perform a specific task, organized as a separate unit in a program. Helps to break down code in smaller, manageable, and reusable blocks.

#### Stl Functions -> printf(), scanf(), sqrt(), etc.

#### User Defined Funtions -> created by the programmer to perform a specific task.

#### General Funtion :

return_type function_name(parameter list) {
// function body
}

#### Function Prototype : when you might want to use a function before actually defining it.

A function prototype is a declaration of the function without its body, and it informs the compiler about the function’s name, return type, and parameters.

##### Func prototype

```
int multiplyNumbers(int x, int y);
```

##### Func definition

```
int multiplyNumbers(int x, int y) {
int product = x \* y;
return product;
}
```

### Lambda Function ( C++ 11 )

Lambda functions are efficient and powerful contain simple expressions.
Ordinary functions -> use global variables / variables passed to function.
Lambda expressions -> use local variables, global variables, variables passed to function

```
[capture-list](parameters) -> return_type {
// function body
};
```

1. capture-list: List of variables from surrounding scope that lambda func. can access.
2. parameters: List of input parameters. Optional.
3. return_type: The type of the value,lambda function will return. Optional, and the compiler can deduce it in many cases.
4. function body: The code that defines the operation of the lambda function.

```
int expiresInDays = 45;
auto updateDays = [&expiresInDays](int newDays) {
expiresInDays = newDays;
};
updateDays(30); // expiresInDays = 30
```

### DataTypes

1. Integer ( int(4 bytes, usually) , short, long, long long )
2. Floating-Point (float, double)
3. Character (char)
4. Boolean (bool)
5. Derived Data Types :
   5.1 Arrays
   5.2 Pointers
   5.3 References
6. User Defined Data Types :

   6.1 Structure (struct) : accessibility of member variables and methods are public.

```
struct Person {
    string name;
    int age;
    float height;
};
Person p1 = {"John Doe", 30, 5.9};
```

6.2 Classes (class) : similar to structure, but the accessibility of the member data and function are governed by access specifiers. ( access to members of a class is private)

```
class Person {
public:
    string name;
    int age;

    void printInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    };
};

Person p1;
p1.name = "John Doe";
p1.age = 30;
```

6.3 Unions (union) : store different datatypes in the same memory location, at one time only one data member can hold the value

```
union Data {
    int num;
    char letter;
    float decimal;
};

Data myData;
myData.num = 42;
```

### Static Typing

C++ is a statically typed language, which means that it uses static typing to determine data types and perform type checking during compile time.

```
#include <iostream>

int main() {
    int num = 42;        // 'num' is statically typed as an integer
    double pi = 3.14159; // 'pi' is statically typed as a double

    num = pi; // This assignment would cause a compile-time error as the types don't match

    std::cout << "The value of num is: " << num << std::endl;
    std::cout << "The value of pi is: " << pi << std::endl;

    return 0;
}
```

### Dynamic Typing in C++

However, C++ also provides concepts to have certain level of dynamic typing, which means determining the data types of variables at runtime.Two ways to achieve it :

#### 1. void\* Pointers

void\* pointer is a generic pointer that can point to objects of any data type. They can be used to store a reference to any type of object without knowing the specific type of the object.

```
#include <iostream>

int main() {
    int x = 42;
    float y = 3.14f;
    std::string z = "Hello, world!";

    void* void_ptr;

    void_ptr = &x;
    std::cout << "int value: " << *(static_cast<int*>(void_ptr)) << std::endl;

    void_ptr = &y;
    std::cout << "float value: " << *(static_cast<float*>(void_ptr)) << std::endl;

    void_ptr = &z;
    std::cout << "string value: " << *(static_cast<std::string*>(void_ptr)) << std::endl;

    return 0;
}
```

#### 2. std::any (C++17)

C++17 introduced the std::any class which represents a generalized type-safe container for single values of any type.

```
#include <iostream>
#include <any>

int main() {
    std::any any_value;

    any_value = 42;
    std::cout << "int value: " << std::any_cast<int>(any_value) << std::endl;

    any_value = 3.14;
    std::cout << "double value: " << std::any_cast<double>(any_value) << std::endl;

    any_value = std::string("Hello, world!");
    std::cout << "string value: " << std::any_cast<std::string>(any_value) << std::endl;

    return 0;
}
```

### Run-Time Type Identification (RTTI)

It is a feature in C++ that allows you to obtain the type information of an object during program execution. This can be useful when using dynamic typing, where the type of an object can change at runtime.There are two main mechanisms for RTTI in C++:

#### 1. typeid operator

typeid is an operator that returns a reference to an object of type std::type_info, which contains information about the type of the object.

```
#include <iostream>
#include <typeinfo>

class Base { virtual void dummy() {} };
class Derived : public Base { /* ... */ };

int main() {
    Base* base_ptr = new Derived;

    // Using typeid to get the type of the object
    std::cout << "Type: " << typeid(*base_ptr).name() << '\n';

    delete base_ptr;
    return 0;
}
```

#### 2. dynamic_cast operator

dynamic_cast is a type-casting operator that performs a runtime type check and safely downcasts a base pointer or reference to a derived pointer or reference. It returns null or throws a bad_cast exception (if casting references) when the casting fails.

```
#include <iostream>

class Base { virtual void dummy() {} };
class Derived1 : public Base { /* ... */ };
class Derived2 : public Base { /* ... */ };

int main() {
    Base* base_ptr = new Derived1;

    // Using dynamic_cast to safely downcast the pointer
    Derived1* derived1_ptr = dynamic_cast<Derived1*>(base_ptr);
    if (derived1_ptr) {
        std::cout << "Downcast to Derived1 successful\n";
    }
    else {
        std::cout << "Downcast to Derived1 failed\n";
    }

    Derived2* derived2_ptr = dynamic_cast<Derived2*>(base_ptr);
    if (derived2_ptr) {
        std::cout << "Downcast to Derived2 successful\n";
    }
    else {
        std::cout << "Downcast to Derived2 failed\n";
    }

    delete base_ptr;
    return 0;
}
```

## Pointers

A pointer is a variable that stores the memory address of another variable (or function). It points to the location of the variable in memory, and it allows you to access or modify the value indirectly

#### General Format

```
dataType *pointerName;
```

#### Function Pointer

```
int add(int a, int b)
{
  return a + b;
}

int main()
{
    // Pointer 'funcptr' now points to the functions 'add'
    int (*funcptr) (int, int) = add;
    funcptr(4, 5); // Return 9
}
```

#### Smart Pointers

##### 1. Weak Pointers

##### 2. Shared Pointers

##### 3. Unique Pointers

## References

A reference is an alias for an existing variable, meaning it’s a different name for the same memory location. Unlike pointers, references cannot be null, and they must be initialized when they are declared.

```
dataType &referenceName = existingVariable;
```

Example :

```
int var = 10;        // Declare an integer variable
int& ref = var;      // Declare a reference that "points to" var

```

###### NOTE : Modifying the value of ref will also modify the value of num because they share the same memory location.
