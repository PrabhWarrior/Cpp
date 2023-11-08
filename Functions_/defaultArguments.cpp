#include <iostream>
using namespace std;

int add(int x, int y, int z = 0)
{
    return x + y + z;
}

int maxi(int x = 0, int y = 0, int z = 0)
{
    return (x > y && x > z) ? x : ((y > z) ? y : z);
}

int main()
{
    cout << add(2, 3) << endl;
    cout << add(2, 3, 5) << endl;

    cout << maxi(2) << endl;
    cout << maxi(2, 3) << endl;
    cout << maxi(2, 3, 5) << endl;

    return 0;
}