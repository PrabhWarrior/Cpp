#include <iostream>
using namespace std;
// 5.
class Demo
{
public:
    int x = 10;
    int y = 20;

    // It wil become read only for the function
    void Display() const
    {
        // Now it cann't modify the data members of a class,
        // x++;
        cout << x << " " << y << endl;
    }
};

int main()
{
    Demo d;
    d.Display();

    return 0;
}