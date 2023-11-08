#include <iostream>
using namespace std;

int main()
{
    int A[5]{2, 4, 6, 8, 10};
    int *p = A, *q = &A[4];

    cout << q - p << endl;
    cout << p - q << endl;

    // cout << *p << endl;
    // p++;
    // cout << *p << endl;
    // p--;
    // cout << *p << endl;

    // cout << *p << endl;
    // cout << *(p + 2) << endl;

    // cout << hex << p << endl;
    // OR
    // cout << p << endl;
    // for (int i = 0; i < 5; i++)
    // {
    // cout << A[i] << endl;
    // cout << i[A] << endl;
    // cout << *(A + i) << endl;

    // cout << p[i] << endl;
    // cout << i[p] << endl;
    // cout << *(p + i) << endl;

    //     cout << *p << endl;
    //     p++;
    // }
    // cout << (int)p << endl;
    return 0;
}