#include <iostream>
using namespace std;

// #define PI 3.1425
// The PI will be replace as 3.1425 before compilation and it will not consume any space
// #define PI 3 // PI macro is redifined

// #define PI 3.14
#ifndef PI
#define PI 3.1425
#endif
int main()
{
    cout << PI << endl;
    return 0;
}