#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int sum(int n, ...)
{
    va_list list;
    va_start(list, n);
    int num, sumOfNumbers = 0;

    for (int i = 0; i < n; i++)
    {
        int num = va_arg(list, int);
        sumOfNumbers += num;
    }
    va_end(list);
    return sumOfNumbers;
}
int main()
{
    cout << sum(3, 1, 2, 3) << endl;
    cout << sum(5, 1, 2, 3, 4, 5) << endl;
    return 0;
}