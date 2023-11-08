#include <iostream>
using namespace std;

class Base
{
public:
    int a;
    void display()
    {
        cout << "Display of Base " << a << endl;
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "Display of Derived " << a << endl;
    }
};

int main()
{
    Base b;
    b.a = 100;
    b.display();

    Derived d;
    d.a = 2;
    d.display();
    d.show();
    return 0;
}