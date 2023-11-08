#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4};
    for (int &x : arr)
    {
        x *= 2;
    }

    for (int x : arr)
    {
        cout << x << endl;
    }

    return 0;
}