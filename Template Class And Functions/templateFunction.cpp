#include <iostream>
using namespace std;

template <class T, class R>
void add(T x, R y)
{
    cout << x + y << endl;
}

int main()
{
    add(1, 1.2);
    add('a', 1);
    return 0;
}