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

    // Add Fucntion
    // Complex add(Complex x)
    Complex operator+(Complex x)
    {
        Complex temp;
        // temp.real = real + x.getReal();
        // temp.img = img + x.getImg();
        // can access object private members but can't access through main() function
        temp.real = real + x.real;
        temp.img = img + x.img;

        return temp;
    }

    // Actuators
    int getReal()
    {
        return real;
    }

    int getImg()
    {
        return img;
    }
};

int main()
{
    Complex C1(5, 3);
    Complex C2(10, 5);
    Complex C3;

    // C3 = C1.add(C2);
    C3 = C1 + C2;

    cout << C3.getReal() << " + i" << C3.getImg() << endl;

    return 0;
}