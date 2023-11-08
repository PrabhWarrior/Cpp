#include <iostream>
using namespace std;

#define msg(x) #x
// will replace x as "x" i.e. as string

int main()
{
    cout << msg(Hello) << endl;
    return 0;
}