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

    // Prototype of a function
    friend Complex operator+(Complex x, Complex y);

    // Actuators
    int getReal()
    {
        return real;
    }

    int getImg()
    {
        return img;
    }

    // Facilitators
    void display()
    {
        cout << real << " + i" << img << endl;
    }
};

int main()
{
    Complex C1(5, 3), C2(10, 5), C3, C4;

    // C3 = C1.add(C2);
    C3 = C1 + C2;

    C4 = operator+(C1, C2);

    C3.display();
    C4.display();

    return 0;
}

Complex operator+(Complex x, Complex y)
{
    Complex temp;
    temp.real = x.real + y.real;
    temp.img = x.img + y.img;

    return temp;
}