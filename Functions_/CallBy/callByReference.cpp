#include <iostream>
using namespace std;

// Swap function is copied in main function -- More like monolithic programming
void swap(int &a, int &b)
{
    cout << &a << " " << &b << endl;
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    swap(x, y);
    cout << &x << " " << &y << endl;
    cout << x << " " << y;

    return 0;
}