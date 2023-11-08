#include <iostream>
using namespace std;

void fun(const int &a, int &b)
{
    cout << "Inside Fun: " << a << " " << b << endl;
    // a++; // can't modify now...  (due to const)
    // benefit -- will become inline functions but will work as call by value
}

int main()
{
    int x = 10;
    int y = 20;

    fun(x, y);
    cout << "Inside Main: " << x << " " << y << endl;

    return 0;
}