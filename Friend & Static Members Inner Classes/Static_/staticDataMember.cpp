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
};

// Declaring and intialzing it again... (like a global variable) but
//  the scope is limited to class
int Test::count = 0;

int main()
{
    cout << Test::count << endl;

    Test t1, t2;
    cout << t1.count << endl;
    cout << t2.count << endl;

    Test t3;
    cout << t3.count << endl;

    t1.count = 25;
    cout << t2.count << endl;

    return 0;
}