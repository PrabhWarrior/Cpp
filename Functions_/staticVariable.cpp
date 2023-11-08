#include <iostream>
using namespace std;

void fun()
{
    static int s = 10; // It was intialized one time only
    s++;
    cout << s << endl;
}

int main()
{
    fun();
    fun();
    fun();

    return 0;
}