#include <iostream>
using namespace std;

class Your;

class My
{
private:
    int a;

protected:
    int b;

public:
    int c;

    friend Your;
    // can access now private and protected in the My object
};

class Your
{
public:
    void func()
    {
        My m;
        m.a = 10;
        m.b = 5;
        m.c = 4;
    }
};

int main()
{

    return 0;
}