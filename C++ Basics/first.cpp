#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string name;
    cout << "Enter name" << endl;
    getline(cin, name);
    cout << "Hello Mr. " << name << endl;
    return 0;
}
