#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // ifstream ifs("My.txt");
    ifstream ifs;
    ifs.open("My.txt");

    string name;
    int rollNo;
    string branch;

    // To check whether the file is existing or not
    if (ifs)
    {
        cout << "File is opened" << endl;
    }
    // OR
    if (ifs.is_open())
    {
        cout << "File is opened" << endl;
    }

    ifs >> name >> rollNo >> branch;

    if (ifs.eof())
    {
        cout << "End of file is reached" << endl;
    }

    ifs.close();

    cout << "Name " << name << endl;
    cout << "Roll No " << rollNo << endl;
    cout << "Branch " << branch << endl;

    return 0;
}