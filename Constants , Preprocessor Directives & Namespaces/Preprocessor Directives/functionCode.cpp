#include <iostream>
using namespace std;

// Macro / Preprocessor
#define max(x, y) (x > y ? x : y) // shoul enclose it in brackets, otherwise it will not work during cout

int main()
{
    // The conditional statement written above will be replaced here
    cout << max(12, 10) << endl;
    return 0;
}