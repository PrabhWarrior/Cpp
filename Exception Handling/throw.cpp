#include <iostream>
using namespace std;

class MyException : exception
{
};
// dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
int division(int a, int b) throw(int)
{
    if (b == 0)
        throw 101;
    return a / b;
}

int main()
{
    int x = 10, y = 0, z;

    try
    {
        // if (y == 0)
        // throw string("Div by 0");
        // throw MyException();1
        z = division(x, y);
        cout << z << endl;
    }
    catch (MyException e)
    { // No insertion overloading , so can't use e here
        // cout << "Division by zero " << e << endl;
        cout << "Division by zero " << endl;
    }
    cout << "Bye" << endl;

    return 0;
}