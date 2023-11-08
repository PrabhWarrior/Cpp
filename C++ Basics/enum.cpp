#include <iostream>
using namespace std;

/*
#define mon 0;
const int mon = 0;
*/

// These are constants
enum day
{
    mon = 1,
    tue = 7,
    wed,
    thu = 10,
    fri,
    sat,
    sun
};
int main()
{
    day d;
    d = wed;
    cout << d << endl
         << endl;
    cout << mon << endl; // directly using it..
    cout << tue << endl;
    cout << wed << endl;
    cout << thu << endl;
    cout << fri << endl;
    cout << sat << endl;
    cout << sun << endl;

    // can't do this bcs these are constant
    // mon++;

    return 0;
}