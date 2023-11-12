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

##### 1. Unique Pointer (`unique_ptr`)

- std::unique_ptr is a smart pointer provided by the C++ Standard Library. It is a template class that is used for managing single objects or arrays.

- unique_ptr works on the concept of exclusive ownership - meaning only one unique_ptr is allowed to own an object at a time. This ownership can be transferred or moved, but it cannot be shared or copied.

- prevent issues like dangling pointers, reduce memory leaks, and eliminates the need for manual memory management. When the unique_ptr goes out of scope, it automatically deletes the object it owns.

> Creating a unique_ptr

```
#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<int> p1(new int(5)); // Initialize with pointer to a new integer
    std::unique_ptr<int> p2 = std::make_unique<int>(10); // Preferred method (C++14 onwards)

    std::cout << *p1 << ", " << *p2 << std::endl;
    return 0;
}
```

> Transferring Ownership

```
#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<int> p1(new int(5));

    std::unique_ptr<int> p2 = std::move(p1); // Ownership is transferred from p1 to p2

    if (p1) {
        std::cout << "p1 owns the object" << std::endl;
    } else if (p2) {
        std::cout << "p2 owns the object" << std::endl;
    }

    return 0;
}
```

> Using unique_ptr with Custom Deleters

```
#include <iostream>
#include <memory>

struct MyDeleter {
    void operator()(int* ptr) {
        std::cout << "Custom Deleter: Deleting pointer" << std::endl;
        delete ptr;
    }
};

int main() {
    std::unique_ptr<int, MyDeleter> p1(new int(5), MyDeleter());
    return 0; // Custom Deleter will be called when p1 goes out of scope
}
```

##### 2. Shared Pointers

- A shared_ptr is a type of smart pointer in C++ that allows multiple pointers to share ownership of a dynamically allocated object. The object will be automatically deallocated only when the last shared_ptr that points to it is destroyed.

- When using a shared_ptr, the reference counter is automatically incremented every time a new pointer is created, and decremented when each pointer goes out of scope. Once the reference counter reaches zero, the system will clean up the memory.

> Code Example :

```
#include <iostream>
#include <memory>

class MyClass {
public:
    MyClass() { std::cout << "Constructor is called." << std::endl; }
    ~MyClass() { std::cout << "Destructor is called." << std::endl; }
};

int main() {
    // create a shared pointer to manage the MyClass object
    std::shared_ptr<MyClass> ptr1(new MyClass());

    {
        // create another shared pointer and initialize it with the previously created pointer
        std::shared_ptr<MyClass> ptr2 = ptr1;

        std::cout << "Inside the inner scope." << std::endl;
        // both pointers share the same object, and the reference counter has been increased to 2
    }

    std::cout << "Outside the inner scope." << std::endl;
    // leaving the inner scope will destroy ptr2, and the reference counter is decremented to 1

    // the main function returns, ptr1 goes out of scope, and the reference counter becomes 0
    // this causes the MyClass object to be deleted and the destructor is called
}
```

> Output:

```
Constructor is called.
Inside the inner scope.
Outside the inner scope.
Destructor is called.
```

In this example, ptr1 and ptr2 share ownership of the same object. The object is only destroyed when both pointers go out of scope and the reference counter becomes zero.

##### 3. Weak Pointers

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

## Structures and Classes in C++

### Structure

- Structures and classes are user-defined data types in C++ that allow for the grouping of variables of different data types under a single name.

- The main difference between a structure and a class is their default access specifier: members of a structure are public by default, while members of a class are private.

A structure is defined using the struct keyword, followed by the structure’s name and a set of curly braces {} enclosing the members (variables and/or functions) of the structure.

```
struct Employee {
    int id;
    std::string name;
    float salary;
};

Employee e1; // create an object of the 'Employee' structure
```

> You can access the members of a structure using the dot operator .

```
e1.id = 1;
e1.name = "John Doe";
e1.salary = 40000;
```

### Class

A class is defined using the class keyword, followed by the class’s name and a set of curly braces {} enclosing the members (variables and/or functions) of the class. Like structures, class members can be of different data types.

```
class Student {
    int roll_no;
    std::string name;
    float marks;

public:
    void set_data(int r, std::string n, float m) {
        roll_no = r;
        name = n;
        marks = m;
    }

    void display() {
        std::cout << "Roll no: " << roll_no
                  << "\nName: " << name
                  << "\nMarks: " << marks << std::endl;
    }
};

Student s1; // create an object of the 'Student' class
```

> Since the data members of a class are private by default, we cannot access them directly using the dot operator from outside the class. Instead, we use public member functions to set or get their values:

```
s1.set_data(1, "Alice", 95.0);
s1.display();
```

###### NOTE : classes provide more control over data encapsulation and can be used to implement more advanced features like inheritance and polymorphism.

## Object-Oriented Programming (OOP) in C++

Object-oriented programming (OOP) is a programming paradigm that uses objects, which are instances of classes, to perform operations and interact with each other.

### Classes

A class is a blueprint for creating objects. It defines the structure (data members) and behavior (member functions) for a type of object. Here’s an example of a simple class:

```
class Dog {
public:
    std::string name;
    int age;

    void bark() {
        std::cout << name << " barks!" << std::endl;
    }
};
```

###### This `Dog` class has two data members: `name` and `age`, and one member function `bark`. You can create an object of this class and access its members like this:

```
Dog myDog;
myDog.name = "Fido";
myDog.age = 3;
myDog.bark(); // Output: Fido barks!
```

### Encapsulation

- Encapsulation is the concept of bundling data and functions that operate on that data within a single unit, such as a class.

- It helps to hide the internal implementation details of a class and expose only the necessary information and functionalities.

- In C++, you can use access specifiers like public, private, and protected to control the visibility and accessibility of class members. For example:

```
class Dog {
private:
    std::string name;
    int age;

public:
    void setName(std::string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void bark() {
        std::cout << name << " barks!" << std::endl;
    }
};
```

###### In this example, we’ve made the `name` and `age` data members `private` and added `public` member functions `setName` and `setAge` to modify them. This way, the internal data of the `Dog` class is protected and only accessible through the provided functions.

## Inheritance

Inheritance is the concept of deriving new classes from existing ones, which enables code reusability and organization. In C++, inheritance is achieved by using a colon : followed by the base class’ access specifier and the base class name. For example:

```
class Animal {
public:
    void breathe() {
        std::cout << "I can breathe" << std::endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        std::cout << "Dog barks!" << std::endl;
    }
};
```

###### In this example, the `Dog `class inherits from the `Animal` class, so the `Dog` class can access the `breathe` function from the `Animal` class. When you create a `Dog` object, you can use both `breathe` and `bark` functions.

### 1. Multiple Inheritance

Multiple inheritance is a feature in C++ where a class can inherit characteristics (data members and member functions) from more than one parent class.

> When a class inherits multiple base classes, it becomes a mixture of their properties and behaviors, and can override or extend them as needed.

Syntax

```
class DerivedClass : access-specifier BaseClass1, access-specifier BaseClass2, ...
{
    // class body
};
```

###### The `DerivedClass` will inherit members from both `BaseClass1` and `BaseClass2`. The `access-specifier` (like `public`, `protected`, or `private`) determines the accessibility of the inherited members.

Example :

```
#include <iostream>

// Base class 1
class Animal
{
public:
    void eat()
    {
        std::cout << "I can eat!" << std::endl;
    }
};

// Base class 2
class Mammal
{
public:
    void breath()
    {
        std::cout << "I can breathe!" << std::endl;
    }
};

// Derived class inheriting from both Animal and Mammal
class Dog : public Animal, public Mammal
{
public:
    void bark()
    {
        std::cout << "I can bark! Woof woof!" << std::endl;
    }
};

int main()
{
    Dog myDog;

    // Calling members from both base classes
    myDog.eat();
    myDog.breath();

    // Calling a member from the derived class
    myDog.bark();

    return 0;
}
```

###### In some cases, multiple inheritance can lead to complications such as ambiguity and the “diamond problem”. Ensure that you use multiple inheritance judiciously and maintain well-structured and modular classes to prevent issues.

### 2. Diamond Inheritance

- Diamond inheritance is a specific scenario in multiple inheritance where a class is derived from two or more classes, which in turn, are derived from a common base class.

- It creates an ambiguity that arises from duplicating the common base class, which leads to an ambiguous behavior while calling the duplicate members.

- To resolve this ambiguity, you can use virtual inheritance. A virtual base class is a class that is shared by multiple classes using virtual keyword in C++.

- This ensures that only one copy of the base class is inherited in the final derived class, and thus, resolves the diamond inheritance problem.

Example :

```
#include <iostream>

class Base {
public:
    void print() {
        std::cout << "Base class" << std::endl;
    }
};

class Derived1 : virtual public Base {
public:
    void derived1Print() {
        std::cout << "Derived1 class" << std::endl;
    }
};

class Derived2 : virtual public Base {
public:
    void derived2Print() {
        std::cout << "Derived2 class" << std::endl;
    }
};

class Derived3 : public Derived1, public Derived2 {
public:
    void derived3Print() {
        std::cout << "Derived3 class" << std::endl;
    }
};

int main() {
    Derived3 d3;
    d3.print(); // Now, there is no ambiguity in calling the base class function
    d3.derived1Print();
    d3.derived2Print();
    d3.derived3Print();

    return 0;
}
```

###### In the code above, `Derived1` and `Derived2` are derived from the Base class using virtual inheritance. So, when we create an object of `Derived3` and call the `print()` function from the `Base` class, there is no ambiguity, and the code executes without any issues.

#### For more info, refer this link :

> https://www.geeksforgeeks.org/inheritance-in-c/

## Polymorphism

- Polymorphism allows you to use a single interface to represent different types.

- In C++, it’s mainly achieved using function `overloading`, `virtual functions`, and `overriding`.

For example:

```
class Animal {
public:
    virtual void makeSound() {
        std::cout << "The Animal makes a sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        std::cout << "Dog barks!" << std::endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        std::cout << "Cat meows!" << std::endl;
    }
};
```

> In this example, we have an `Animal` base class with a virtual `makeSound` function. We then derive two classes, `Dog` and `Cat`, which override the `makeSound` function

> This enables polymorphic behavior, where an `Animal` pointer or reference can be used to access the correct `makeSound` function depending on the derived class type.

```
Animal *animals[2] = {new Dog, new Cat};
animals[0]->makeSound(); // Output: Dog barks!
animals[1]->makeSound(); // Output: Cat meows!
```

### 1. Static Polymorphism

Static polymorphism, also known as `compile-time polymorphism`, is a type of polymorphism that resolves the types and method calls at `compile time` rather than at runtime. This is commonly achieved through the use of function overloading and templates in C++.

#### Function Overloading

- Function overloading is a way to create multiple functions with the same name but different parameter lists.

- The compiler determines the correct function to call based on the types and number of arguments used when the function is called.

Example :

```
#include <iostream>

void print(int i) {
    std::cout << "Printing int: " << i << std::endl;
}

void print(double d) {
    std::cout << "Printing double: " << d << std::endl;
}

void print(const char* s) {
    std::cout << "Printing string: " << s << std::endl;
}

int main() {
    print(5);          // Calls print(int i)
    print(3.14);       // Calls print(double d)
    print("Hello");    // Calls print(const char* s)

    return 0;
}
```

#### 2. Templates

- Templates are a powerful feature in C++ that allows you to create generic functions or classes.

- The actual code for specific types is generated at compile time, which avoids the overhead of runtime polymorphism.

- The use of templates is the main technique to achieve `static polymorphism` in C++.

Example :

```
#include <iostream>

// Template function to print any type
template<typename T>
void print(const T& value) {
    std::cout << "Printing value: " << value << std::endl;
}

int main() {
    print(42);           // int
    print(3.14159);      // double
    print("Hello");      // const char*

    return 0;
}
```

> In conclusion, static polymorphism achieves polymorphic behavior during compile time using function overloading and templates.

> Instead of relying on runtime information like dynamic polymorphism does. This can result in more efficient code since method calls are resolved at compile time.

### 2. Dynamic Polymorphism

- Dynamic polymorphism is a programming concept in object-oriented languages like C++ where a derived class can override or redefine methods of its base class.

- This means that a single method call can have different implementations based on the type of object it is called on.

> Dynamic polymorphism is achieved through **virtual functions**, which are member functions of a base class marked with the `virtual` keyword. When you specify a virtual function in a base class, it can be overridden in any derived class to provide a different implementation.

Example :

```
#include <iostream>

// Base class
class Shape {
public:
    virtual void draw() {
        std::cout << "Drawing a shape" << std::endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a circle" << std::endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a rectangle" << std::endl;
    }
};

int main() {
    Shape* shape;
    Circle circle;
    Rectangle rectangle;

    // Storing the address of circle
    shape = &circle;

    // Call circle draw function
    shape->draw();

    // Storing the address of rectangle
    shape = &rectangle;

    // Call rectangle draw function
    shape->draw();

    return 0;
}
```

###### This code defines a base class `Shape` with a virtual function `draw`. Two derived classes `Circle` and `Rectangle` both override the `draw` function to provide their own implementations. Then in the `main` function, a pointer of type `Shape` is used to call the respective `draw` functions of `Circle` and `Rectangle` objects. The output of this program will be:

```
Drawing a circle
Drawing a rectangle
```

###### As you can see, using dynamic polymorphism, we can determine at runtime which `draw` method should be called based on the type of object being used.

### Virtual Methods :

- Virtual methods are a key aspect of dynamic polymorphism in C++. They allow subclass methods to override the methods of their base class, so the appropriate method is called depending on the actual type of an object at runtime.

- To declare a method as `virtual`, simply use the virtual keyword in the method’s declaration in the base class. This tells the compiler that the method should be treated as a virtual method, allowing it to be overridden by derived classes.

Example :

```
#include <iostream>

// Base class
class Shape {
public:
    virtual double area() const {
        return 0;
    }
};

// Derived class
class Circle : public Shape {

private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Override the base class method
    double area() const override {
        return 3.14 * radius * radius;
    }

};

// Derived class
class Rectangle : public Shape {

private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    // Override the base class method
    double area() const override {
        return width * height;
    }

};

int main() {
    Circle c(5);
    Rectangle r(4, 6);

    Shape* shape = &c;
    std::cout << "Circle's area: " << shape->area() << std::endl;

    shape = &r;
    std::cout << "Rectangle's area: " << shape->area() << std::endl;

    return 0;
}
```

###### In this example, we define a base class `Shape` that has a virtual method `area`. This method is then overridden by the derived classes `Circle` and `Rectangle`. By using a virtual method and a base class pointer to the derived objects, we can invoke the appropriate `area`method based on the actual object type at runtime.

#### For more info, refer this link :

> https://www.javatpoint.com/cpp-virtual-function

#### To study `const` keyword, refer this link :

> https://www.javatpoint.com/const-keyword-in-cpp

### Virtual Tables :

- Virtual Tables (or Vtable) are a mechanism used by C++ compilers to support dynamic polymorphism. In dynamic polymorphism, the appropriate function is called at runtime, depending on the actual object type.

- When a class contains a virtual function, the compiler creates a virtual table for that class. This table contains function pointers to the virtual functions defined in the class.

- Each object of that class has a pointer to its virtual table (vptr, virtual pointer), which is automatically initialized by the compiler during object construction.

Example :

```
class Base {
public:
    virtual void function1() {
        std::cout << "Base::function1" << std::endl;
    }

    virtual void function2() {
        std::cout << "Base::function2" << std::endl;
    }
};

class Derived : public Base {
public:
    void function1() override {
        std::cout << "Derived::function1" << std::endl;
    }

    void function3() {
        std::cout << "Derived::function3" << std::endl;
    }
};

int main() {
    Base* obj = new Derived(); // create a Derived object and assign a pointer of type Base*
    obj->function1(); // calls Derived::function1, due to dynamic polymorphism
    obj->function2(); // calls Base::function2

    delete obj;
    return 0;
}
```

###### In this example, when a `Derived` object is created, the compiler generates a Vtable for `Derived` class, containing pointers to its virtual functions:

```
Derived::function1 // (overridden from Base)
Base::function2  // (inherits from Base)
```

###### The `_vptr_` pointer in the `Derived` object points to this Vtable. When the `function1` is called on the `Base` pointer pointing to the `Derived` object, the function pointer in the Vtable is used to call the correct function (in this case, `Derived::function1`). Similarly, the call to `function2` calls `Base::function2`, since it’s the function pointer stored in the Vtable for `Derived` class.

###### Note that `function3` is not part of the Vtable, as it is not a virtual function.

## Exception handling

Exception handling in C++ is a mechanism to handle errors, anomalies, or unexpected events that can occur during the runtime execution of a program.

> This allows the program to continue running or exit gracefully when encountering errors instead of crashing abruptly.

C++ provides a set of keywords and constructs for implementing exception handling:

- `try`: Defines a block of code that should be monitored for exceptions.

- `catch`: Specifies the type of exception to be caught and the block of code that shall be executed when that exception occurs.

- `throw`: Throws an exception that will be caught and handled by the appropriate catch block.

- `noexcept`: Specifies a function that doesn’t throw exceptions or terminates the program if an exception is thrown within its scope.

Example :

```
#include <iostream>

int divide(int a, int b) {
    if (b == 0) {
        throw "Division by zero!";
    }
    return a / b;
}

int main() {
    int num1, num2;

    std::cout << "Enter two numbers for division: ";
    std::cin >> num1 >> num2;

    try {
        int result = divide(num1, num2);
        std::cout << "The result is: " << result << std::endl;
    } catch (const char* msg) {
        std::cerr << "Error: " << msg << std::endl;
    }

    return 0;
}
```

###### In this example, we define a function `divide` that throws an exception if b is zero. In the `main` function, we use a `try` block to call `divide` and output the result. If an exception is thrown, it is caught inside the `catch` block, which outputs an error message. This way, we can handle the error gracefully rather than letting the program crash when attempting to divide by zero.

Standard Exceptions :
C++ provides a standard set of exception classes under the `<stdexcept>` library which can be used as the exception type for more specific error handling. Some of these classes include:

- `std::exception`: Base class for all standard exceptions.

- `std::logic_error`: Represents errors which can be detected statically by the program.

- `std::runtime_error`: Represents errors occurring during the execution of a program.

Here’s an example showing how to use standard exceptions:

```
#include <iostream>
#include <stdexcept>

int divide(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero!");
    }
    return a / b;
}

int main() {
    int num1, num2;

    std::cout << "Enter two numbers for division: ";
    std::cin >> num1 >> num2;

    try {
        int result = divide(num1, num2);
        std::cout << "The result is: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
```

###### In this example, we modified the `divide` function to throw a `std::runtime_error` instead of a simple string. The catch block now catches exceptions derived from `std::exception` and uses the member function `what()` to display the error message.

### Access Violations

An access violation is a specific type of error that occurs when a program attempts to access an illegal memory location. In C++, access violations are most commonly caused by:

It is crucial to identify access violations because they can lead to unpredictable behavior, application crashes, or corruption of data.

Some examples of access violations are:

#### 1. Dereferencing null or invalid pointer

```
int *p = nullptr;
int x = *p;  // Access violation: trying to access null pointer's content
```

#### 2. Accessing an array out of bounds

```
int arr[5] = {1, 2, 3, 4, 5};
int y = arr[5];  // Access violation: index out of bounds (valid indices are 0-4)
```

#### 3. Reading or writing to freed memory

```
int* p2 = new int[10];
delete[] p2;
p2[3] = 42;  // Access violation: writing to memory that has been freed
```

#### Debugging Access Violations

Tools like debuggers, static analyzers, and profilers can help identify access violations in your code.

### Exception Handling in C++

Exception handling is a method used to tackle runtime errors so that normal flow of the program can be maintained. In C++, this is accomplished using three keywords: try, catch, and throw.

#### try { … }

In the `try` block, you write the code that can possibly generate an exception. If an exception is encountered, the control is passed to the relevant `catch` block to handle the issue.

Example:

```
try {
  // code that might throw an exception
}
```

#### catch (…) { … }

The `catch` block follows the `try` block and is responsible for handling the exceptions thrown by the `try` block. There can be multiple `catch` blocks to handle different types of exceptions.

Example :

```
catch (int e) {
  // handle exception of type int
}
catch (char e) {
  // handle exception of type char
}
catch (...) {
  // handle any other exception
}
```

#### throw … ;

In case an error occurs within the `try` block, you can use the `throw` keyword to generate an exception of the specific type. This will then be caught and handled by the corresponding `catch` block.

Example :

```
try {
  int num1 = 10, num2 = 0;
  if (num2 == 0) {
    throw "Division by zero not allowed!";
  } else {
    int result = num1 / num2;
    cout << "Result: " << result << endl;
  }
}
catch (const char* e) {
  cout << "Error: " << e << endl;
}
```

###### In summary, exception handling in C++ is a technique to handle runtime errors while maintaining the normal flow of the program. The `try`, `catch`, and `throw` keywords are used together to create the structure to deal with exceptions as they occur.

### Exit Codes

Exit codes, also known as “return codes” or “status codes”, are numeric values that a program returns to the calling environment (usually the operating system) when it finishes execution. These codes are used to indicate the success or failure of a program’s execution.

> 0 is the standard exit code for a successful execution, while non-zero exit codes typically indicate errors or other exceptional situations. The actual meanings of non-zero exit codes can vary between different applications or systems.

In C++, you can return an exit code from the `main` function by using the `return` statement, or you can use the `exit()` function, which is part of the C++ Standard Library.

Example: Using return in `main`

```
#include <iostream>

int main() {
    // Some code here...

    if (/*some error condition*/) {
        std::cout << "An error occurred." << std::endl;
        return 1;
    }

    // More code here...

    if (/*another error condition*/) {
        std::cout << "Another error occurred." << std::endl;
        return 2;
    }

    return 0; // Successful execution
}
```

Example: Using the `exit()` function

```
#include <iostream>
#include <cstdlib>

void some_function() {
    // Some code here...

    if (/*some error condition*/) {
        std::cout << "An error occurred." << std::endl;
        std::exit(1);
    }

    // More code here...
}

int main() {
    some_function();

    // Some other code here...

    return 0; // Successful execution
}
```

###### In both examples above, the program returns exit codes depending on different error conditions encountered during execution. The codes 1 and 2 are used to distinguish between the two error conditions.
