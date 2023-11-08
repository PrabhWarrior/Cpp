#include <iostream>
using namespace std;

// Range of char -- (-128 to 127)
int main()
{
    char x = -128;
    x--;
    cout << (int)x << endl;

    x++;
    cout << (int)x << endl;

    return 0;
}