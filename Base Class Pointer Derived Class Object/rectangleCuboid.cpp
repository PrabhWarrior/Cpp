#include <iostream>
using namespace std;

class Rectangle
{
public:
    void area()
    {
        cout << "Area of Rectangle" << endl;
    }
};

class Cuboid : public Rectangle
{
public:
    void Volume()
    {
        cout << "Cuboid's Volume" << endl;
    }
};

int main()
{
    Cuboid c;
    Rectangle *p = &c;
    p->area();
    // p->Volume(); // Can only access Rectangle functions (i.e base funcitons)

    Rectangle r;
    // Cuboid *ptr = &r;
    // cannot assign object of base class to the pointer of derived class
    return 0;
}