#include <iostream>
using namespace std;

// class Parent final // can't be inherited
class Parent
{
    // virtual void show() final {} // cann't be overriden but must be virtual first
    virtual void show() final {}
};

class Child : public Parent
{
    void show() {}
};

int main()
{

    return 0;
}