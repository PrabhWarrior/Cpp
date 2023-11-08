#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    float y = 12.5;

    decltype(y) z = 19.4;
    cout << z << endl;

    return 0;
}