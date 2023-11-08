#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter a number" << endl;
    cin >> n;

    int temp = n;

    while (temp)
    {
        int digit = temp % 10;
        sum += (digit * digit * digit);
        temp /= 10;
    }

    if (sum == n)
        cout << "It's an armstrong number" << endl;
    else
        cout << "It's not an armstrong number" << endl;

    return 0;
}