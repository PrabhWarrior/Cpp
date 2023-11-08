#include <iostream>
using namespace std;

struct Demo
{
    int x;
    int y;

    void Display()
    {
        cout << x << " " << y << endl;
    }

    Demo()
    {
        x = 1;
        y = 1;
    }

    ~Demo()
    {
        cout << "Structure is destroyed!" << endl;
    }
};

int main()
{
    Demo d;
    // d.x = 10;
    // d.y = 20;

    d.Display();
    return 0;
}