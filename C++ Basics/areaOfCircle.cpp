#include <iostream>
using namespace std;

#define PI 3.1425

int main()
{
    int radius;
    cout << "Enter radius of the circle" << endl;
    cin >> radius;

    cout << "Area of circle is " << PI * radius * radius;

    return 0;
}