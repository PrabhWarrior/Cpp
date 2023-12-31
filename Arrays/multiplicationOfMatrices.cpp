#include <iostream>
using namespace std;

int main()
{
    int A[10][10], B[10][10], C[10][10];
    int r1, c1, r2, c2;

    cout << "Enter the rows and cols of first matrix " << endl;
    cin >> r1 >> c1;

    cout << endl;

    cout << "Enter the rows and cols of second   matrix " << endl;
    cin >> r2 >> c2;

    if (c1 != r2)
    {
        cout << "Invalid Inputs";
        return 0;
    }

    cout << "Enter the elements of first matrix " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> A[i][j];
        }
        cout << endl;
    }

    cout << endl;

    cout << "Enter the elements of second matrix " << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> B[i][j];
        }
        cout << endl;
    }

    // Multiplication of Matrices
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < r2; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}