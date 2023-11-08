#include <iostream>
using namespace std;

// Lambda expressions are unnamed functions
// Feature of functional programming -- also used in AI
// Useful in nested functions
// [capture_list](parameter_list)->return_type(optional){Body}

template <typename T>
void fun(T p)
{
    p();
}

int main()
{
    // []()
    // { cout << "Hello" << endl; }();

    // with paramters
    // [](int x, int y)
    // { cout << "Sum is " << x + y << endl; }(10, 30);

    // returning the result
    // int a = [](int x, int y) -> int
    // { return x + y; }(10, 30);
    // cout << a << endl;

    int a = 10;
    auto t = [a]()
    {
        // cout << ++a << endl; // can't modify read-only
        cout << a << endl;
    };

    t();
    a++;
    t();

    // with refernce can modify
    auto f = [&a]()
    {
        cout << a++ << endl;
    };

    // lambda expression as function paramter
    fun(f);
    f();

    // for accesing all the variable in scope

    return 0;
}