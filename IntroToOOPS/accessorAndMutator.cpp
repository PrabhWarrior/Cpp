#include <iostream>
using namespace std;

//  By default -- Class data members and functions are private
class Rectangle
{
private:
    int length;
    int breadth;

public:
    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }

    // Accessors
    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }

    // Mutators
    void setLength(int l)
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
    void setBreadth(int b)
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
};

int main()
{
    Rectangle r1;
    // r1.length = 0; // can't access

    // cout << r1.area() << endl; // Will give garbage value

    r1.setLength(15);
    r1.setBreadth(-5);
    cout << r1.area() << endl;

    cout << r1.getLength() << endl;
    cout << r1.getBreadth() << endl;

    return 0;
}