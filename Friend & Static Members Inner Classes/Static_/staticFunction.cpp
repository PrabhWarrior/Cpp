#include <iostream>
using namespace std;

class Test
{
public:
    int a;
    static int count;

    Test()
    {
        a = 10;
        count++;
    }

    static int getCount()
    {
        // a++; // can't access non-static members inside static functions
        return count;
    }
};

int Test::count = 0;
int main()
{
    Test t1, t2;
    cout << Test::getCount() << endl;
    cout << t1.getCount() << endl;

    return 0;
}
/*
Static functions belongs to a class not to an object ,
you can access it throught object and class as well.
*/