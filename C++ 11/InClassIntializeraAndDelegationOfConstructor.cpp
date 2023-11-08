#include <iostream>
using namespace std;

class Test
{
    // In-Class Intializer
    int a = 10;
    int b = 20;

public:
    Test(int x, int y)
    {
        a = x;
        b = y;
    }
    // Delegation of Cosntructor --> calling parameterized constructor thorught non-paramenterized constructor
    Test() : Test(1, 1)
    {
    }

    void print()
    {
        cout << "Value of a is " << a << " and b is " << b << endl;
    }
};

int main()
{
    Test *t = new Test(1, 2);
    t->print();
    return 0;
}