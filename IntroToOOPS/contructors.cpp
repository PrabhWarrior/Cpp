#include <iostream>
using namespace std;

//  By default -- Class data members and functions are private
class Rectangle
{
private:
    int length;
    int breadth;

public:
    // Constructors
    // Rectangle() // Non-Parameterized Constructor
    // {
    //     length = 1;
    //     breadth = 1;
    // }

    // Instead of Writing non-parameterized -- set default arguments in parameterized constructor

    Rectangle(int l = 1, int b = 1) // Parameterized Constructor
    {
        // Mutators will veryify that the length and breadth are not negative
        setLength(l);
        setBreadth(b);
    }

    Rectangle(Rectangle &r) // Copy Constructor
    {
        length = r.length;
        breadth = r.breadth;
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

    // Facilitators
    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
int main()
{

    Rectangle r1(10, 5);
    Rectangle r2(r1);
    Rectangle r3;
    cout << r2.area() << endl;
    cout << r3.area() << endl;
    return 0;
}