#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int &y = x; // declaration and intialization simuntaneously in case of reference

    int b = 20;
    // &y = b; // can't done like this ... a reference can't be changed at all
    y = b; // here b is r-value(data and storing in y)
    cout << y << endl;

    cout << x << endl;
    y++;
    x++;
    cout << x << endl;

    cout << &x << " " << &y << endl;

    return 0;
}