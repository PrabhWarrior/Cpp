#include <iostream>
using namespace std;

float fun() { return 2.34f; }
int main()
{
    double d = 12.4;
    int i = 2;
    char ch = 'a';

    auto result = i * d + ch;
    auto x = fun();
    cout << result << " " << x << endl;

    return 0;
}