#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter two numbers" << endl;

    cin >> m >> n;

    while (m != n)
    {
        if (m > n)
        {
            m = m - n;
        }
        else
        {
            n = n - m;
        }
    }

    cout << m << endl;

    return 0;
}