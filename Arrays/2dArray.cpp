#include <iostream>
using namespace std;

int main()
{
    int A[2][3];
    // {{2, 4, 6}, {3, 5, 7}}

    for (auto &x : A)
    {
        for (auto &y : x)
        {
            cin >> y;
        }
        cout << endl;
    }

    for (auto &x : A)
    {
        for (auto &y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }

    int B[2][3] = {2, 4, 6, 3, 5, 7};
    int C[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}