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
    // friend void operator<<(ostream &out, Complex &c);
    friend ostream &operator<<(ostream &out, Complex &c);
};

ostream &operator<<(ostream &out, Complex &c)
{
    out << c.real << " + i" << c.img << endl;
    return out;
}
// void operator<<(ostream &out, Complex &c)
// {
//     out << c.real << " + i" << c.img << endl;
// }

int main()
{
    Complex c(10, 5);
    // c.display();

    cout << c << endl; // OR
    operator<<(cout, c);

    return 0;
}
