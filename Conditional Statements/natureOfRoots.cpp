#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    float discriminant;
    cout << "Enter three numbers " << endl;
    cin >> a >> b >> c;
    discriminant = b * b - 4 * a * c;

    if (discriminant == 0)
    {
        cout << "Roots are real and equal" << endl;
        cout << ((-b) / (2 * a)) << endl;
    }
    else if (discriminant > 0)
    {
        cout << "Roots are real and unequal" << endl;
        cout << ((-b + discriminant) / (2 * a)) << endl;
        cout << ((-b - discriminant) / (2 * a)) << endl;
    }
    else
    {
        cout << "Roots are imaginary" << endl;
    }

    return 0;
}