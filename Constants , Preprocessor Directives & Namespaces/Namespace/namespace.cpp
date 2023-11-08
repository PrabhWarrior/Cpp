#include <iostream>
using namespace std;
// namespaces are used to remove the name conflicts between the fuctions, classes and objects
// you can define namespace in seperate file and include them in header (For Bigger Projects)
/*
void fun() { cout << "first"; }
void fun() { cout << "Second"; } // ERROR: Redefintion on fun()
*/
namespace first
{
    void fun()
    {
        cout << "first" << endl;
    }
}
namespace Second
{
    void fun() { cout << "Second" << endl; }
}

// can also used it as default
using namespace first; // avoid usint this
int main()
{
    // fun(); can't directly used, because it's inside a namespace
    fun();
    //  either declare it as default
    // OR
    Second::fun();

    std::cout << "Using from standard namespace" << endl;
    return 0;
}