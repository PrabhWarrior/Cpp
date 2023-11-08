#include <iostream>
using namespace std;

class Test
{
private:
    int a;

protected:
    int b;

public:
    int c;

    friend void func();
    // with the help of friend function, we can acces private & protected members of class as well upon on object
};

void func()
{
    Test t;
    t.a = 10;
    t.b = 5;
    t.c = 4;
}

int main()
{

    return 0;
}