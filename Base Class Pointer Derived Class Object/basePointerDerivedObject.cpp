#include <iostream>
using namespace std;

class Base
{
public:
    void fun1()
    {
        cout << "fun1 of Base" << endl;
    }
};

class Derived : public Base
{
public:
    void fun2()
    {
        cout << "fun2 of Derived" << endl;
    }
};

int main()
{
    //  Object is derived and pointer is base.. it can call only those fuctions present in the base class
    /*
    Derived d;
    Base *p = &d;
    p->fun1();
    // p->fun2();
    */

    // Base b;
    // Derived *p = &b; // cannot assign object of base class to the pointer of derived class

    return 0;
}