#include <iostream>
using namespace std;

class Outer
{
private:
    class Inner
    {
    private:
        int a;

    protected:
        int b;

    public:
        void display()
        {
            cout << "Display of Inner" << endl;
        }
    };

public:
    void fun()
    {
        i.display();
        // i.a = 10;
        // i.b = 6; can't access private and protected members of inner clas
    }

    Inner i; // can only declare after the definition of class
};

int main()
{
    // can create the object of inner class outside the class also bcs it is public
    // Outer ::Inner i; // can't access if it is private or protected..

    return 0;
}