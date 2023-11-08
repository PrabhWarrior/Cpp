#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    // Constructors
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);

    // Actuators
    int getLength() { return length; };   // Inline function
    int getBreadth() { return breadth; }; // Inline function

    // Mutators
    void setLength(int l);
    void setBreadth(int b);

    // Facilitators
    int area();
    int perimeter();

    // Inquiry / Inspector
    bool isSqaure();

    // Destructor
    ~Rectangle();
};

class Cuboid : public Rectangle
{
private:
    int height;

public:
    Cuboid(int h = 1)
    {
        height = h;
    }

    int getHeight() { return height; }
    void setHeigh(int h) { height = h; }

    // private members of base class can't be accessible through derived class
    int volume() { return getLength() * getBreadth() * height; }
};

int main()
{
    Cuboid c(5);
    c.setLength(10);
    c.setBreadth(7);
    cout << "Volume is " << c.volume() << endl;

    return 0;
}

// Constuctors
Rectangle ::Rectangle()
{
    length = 1;
    breadth = 1;
}

Rectangle ::Rectangle(int length, int breadth)
{
    this->length = length;
    this->breadth = breadth;
}

Rectangle ::Rectangle(Rectangle &r)
{
    length = r.length;
    breadth = r.breadth;
}

// Mutators
void Rectangle ::setLength(int l)
{ // Validating the data
    if (l >= 0)
    {
        length = l;
    }
    else
    {
        cout << "Length can't be negative, setting as one." << endl;
        length = 1;
    }
}

void Rectangle ::setBreadth(int b)
{
    if (b >= 0)
    {
        breadth = b;
    }
    else
    {
        cout << "Breadth can't be negative, setting it as one." << endl;
        breadth = 1;
    }
}

// Facilitators
int Rectangle ::area()
{
    return length * breadth;
}

int Rectangle ::perimeter()
{
    return 2 * (length + breadth);
}

// Inquiry
bool Rectangle ::isSqaure()
{
    return length == breadth;
}

// Destructor
Rectangle ::~Rectangle()
{
    // cout << "Rectangle Destroyed " << endl;
}