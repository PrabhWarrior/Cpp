#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    switch (x)
    {
    default:
        cout << "Invalid Number";
        break;
    case 1:
        cout << "One";
        break;
    case 2:
        cout << "Two";
        break;
    }
    return 0;
}