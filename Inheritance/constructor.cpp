#include <iostream>
using namespace std;

class Base
{
public:
    Base() { cout << "Non-param of Base" << endl; }
    Base(int x) { cout << "Param of Base " << x << endl; }
};

class Derived : Base
{
public:
    Derived() { cout << "Non-param of Derived" << endl; }
    Derived(int y) { cout << "Param of Derived " << y << endl; }

    Derived(int x, int y) : Base(x)
    {
        cout << "Param of Derived " << y << endl;
    }
};

int main()
{
    Derived d1;
    // Non - param of Base
    // Non-param of Derived

    Derived d2(10);
    // Non-param of Base
    // Param of Derived 10

    // To call Param of Base:
    Derived d3(20, 10);
    // Param of Base 20
    // Param of Derived 10Param of Base 20
    return 0;
}