#include <iostream>
using namespace std;

class Demo
{
    int *p;

public:
    Demo()
    {
        p = new int[10];
        cout << "Constructor of Demo" << endl;
    }
    ~Demo()
    {
        delete[] p;
        // should release memory in destructor otherwise it will lead memory leak problem and program may crash
        cout << "Destructor of Demo" << endl;
    }
};

void fun()
{
    // Demo d; // In stack the destructor is automatically called

    Demo *p = new Demo();
    // The destructor is not called automatically if you create an object in heap
    // (must be explicitly deleted)

    // if not deleted , it can also lead memory leak problem
    delete p;
    // Now it will call destructor
}

int main()
{
    fun();
    return 0;
}