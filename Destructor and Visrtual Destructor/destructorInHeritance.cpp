#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base Constructor" << endl;
    }
    virtual ~Base()
    {
        cout << "Base Destructor" << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived Constructor" << endl;
    }
    ~Derived()
    {
        cout << "Derived Destructor" << endl;
    }
};

void fun()
{
    // Derived d;
    Base *p = new Derived();
    delete p;
}

int main()
{
    fun();
    return 0;
}