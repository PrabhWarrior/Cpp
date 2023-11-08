#include <iostream>
using namespace std;
int g = 5;
void func()
{
    // int a = 10;
    // a++;
    // g++;
    // cout << a << " " << g << endl;

    // Block Level Scope
    int g = 10;
    {
        int g = 0; // nearest scope -- local variable
        g++;
        cout << g << endl;
        // Compiler will look up for the nearest scope
        // -- Local variable will get mor preference then global variable
    }
    cout << ::g << endl; // Accessing Global Variable with scope resolution operator {::}
    cout << g << endl;
}

int main()
{
    cout << g << endl;
    func();
    cout << g << endl;

    return 0;
}