#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter the number of elements" << endl;
    cin >> size;
    int *p = new int[size];
    cout << sizeof p << endl;

    delete[] p;

    cout << "Enter new size" << endl;
    cin >> size;
    p = new int[size];

    cout << sizeof(p) << endl;

    return 0;
}