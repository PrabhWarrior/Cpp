#include <iostream>
using namespace std;

int main()
{
    int *p;
    p = new int[5];
    p[0] = 12;
    p[1] = 13;

    cout << p[1];

    delete[] p;
    p = nullptr;

    return 0;
}