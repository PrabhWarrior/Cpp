#include <iostream>
using namespace std;
class Rectangle
{
public:
    int length;
    int breadth;

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
    Rectangle r1;
    Rectangle *ptr;

    ptr = &r1;

    // Accessig Object Using Pointer
    ptr->length = 10;
    ptr->breadth = 5;

    cout << "Area is " << ptr->area() << endl;

    // Creating Object in heap
    // Rectangle *p = new Rectangle(); // -- brackets are optional()
    // OR
    Rectangle *p = new Rectangle;

    p->length = 5;
    p->breadth = 5;
    cout << "Area is " << p->area() << endl;
    cout << "Perimeter is " << p->perimeter() << endl;

    return 0;
}