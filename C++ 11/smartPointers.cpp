#include <iostream>
#include <memory>

using namespace std;

class Rectangle
{
    int length;
    int breadth;

public:
    Rectangle(int l, int b)
    {

        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
};

int main()
{
    // // 1. Unique Pointer
    // // Have to mention data types in it bcs these are template pointers
    // unique_ptr<Rectangle> ptr(new Rectangle(10, 5));
    // cout << ptr->area() << endl;

    // // unique_ptr<Rectangle> ptr2 = ptr; // not allowed as unique_ptr can pint to only1 object
    // unique_ptr<Rectangle> ptr2;
    // ptr2 = move(ptr);
    // cout << ptr2->area() << endl;
    // // now ptr will display null bcs ptr is not pointing on any valid object
    // // cout << ptr->area() << endl;

    // 2. Shared Pointer
    shared_ptr<Rectangle> ptr(new Rectangle(10, 5));
    // cout << ptr->area() << endl;

    shared_ptr<Rectangle> ptr2 = ptr;
    // Both will get the same aread bcs both are pointing on the same object
    cout << "Ptr2 : " << ptr2->area() << endl;
    cout << "Ptr : " << ptr->area() << endl;

    // How many pointers are pointing on the same object
    cout << ptr.use_count() << endl;

    return 0;
}