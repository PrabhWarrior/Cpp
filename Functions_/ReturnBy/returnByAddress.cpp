#include <iostream>
using namespace std;

int *func(int size)
{
    // int x = 10;
    // return &x; // can't return address of a local variable

    // Allocating heap memory
    int *p = new int[size];
    for (int i = 0; i < size; i++)
    {
        p[i] = i + 1;
    }
    cout << p << endl;

    return p;
}
// Here Heap memory is gloabal... so main and func both can access it...
int main()
{
    int size = 6;
    int *ptr = func(size);

    cout << ptr << endl;

    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] << " ";
    }
    cout << endl;
    return 0;
}