#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int img;

public:
    // Constructor
    Complex(int real = 0, int img = 0)
    {
        this->real = real;
        this->img = img;
    }

    // Prototype
    friend istream &operator>>(istream &in, Complex &c);
    friend ostream &operator<<(ostream &out, Complex &c);
};

ostream &operator<<(ostream &out, Complex &c)
{
    out << c.real << " + i" << c.img << endl;
    return out;
}

istream &operator>>(istream &in, Complex &c)
{
    cout << "Enter the Real Part ";
    in >> c.real;

    cout << "Enter the Imaginary Part ";
    in >> c.img;

    return in;
}

int main()
{
    Complex c(10, 5);
    cout << c << endl;

    Complex c1, c2;
    cin >> c1 >> c2;

    cout << c1 << c2;

    return 0;
}
