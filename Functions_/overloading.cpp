#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

float sum(float a, float b)
{
    return a + b;
}

// int sum(float a, float b) // only differ in return type-- cause name conflicts
// {
//     return a + b;
// }

int sum(int a, float b) // differ in return type and one parameter
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}

int main()
{

    cout << sum(10, 5) << endl;
    cout << sum(10, 5, 3) << endl;
    cout << sum(10.5f, 7.3f) << endl;
    cout << sum(10, 7.3f) << endl;
    // by deafult taken as double .. convert it into float -- 7.5f
    return 0;
}