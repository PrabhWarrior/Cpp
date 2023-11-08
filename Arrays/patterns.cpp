#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int count = 1;
    cout << "Pattern 1 :" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << count++ << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Pattern 2 :" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j <= i)
                cout << "*"
                     << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Pattern 3 :" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < i)
                cout << "  ";
            else
                cout << "*"
                     << " ";
        }
        cout << endl;
    }

    cout << "Pattern 4 :" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j >= n - 1)
                cout << "*"
                     << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}