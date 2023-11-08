#include <iostream>
#include <math.h>
using namespace std;

// Roots of Quadratic Equation
int main()
{
    int a, b, c;
    float r1, r2;
    cout << "Enter the coefficients" << endl;
    cin >> a >> b >> c;
    r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    cout << r1 << " " << r2;

    return 0;
}