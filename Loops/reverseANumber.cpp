#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter a number" << endl;
    cin >> n;
    int m = n;
    while (m)
    {
        int digit = m % 10;
        sum = sum * 10 + digit;
        m /= 10;
    }
    if (n == sum)
        cout << "It's a pallindrome" << endl;
    cout << "Reverse of the number is " << sum;
    return 0;
}