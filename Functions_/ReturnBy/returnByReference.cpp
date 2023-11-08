#include <iostream>
using namespace std;

// int &func()
// {
//     int x = 10;
//     return x; // can't return the reference of local variable
// }
int &func(int &x)
{
    return x;
    // taking reference of 'a' and returning same thing i.e. to a variable of main function
}

int main()
{
    int a = 10;
    // It works like l-value --{bcs on left side -- working as location, 25 will be stored in it}
    func(a) = 25;
    cout << a << endl;
    return 0;
}