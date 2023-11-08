#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // ofstream ofs("My.txt", ios::trunc); //  By default trunc
    ofstream ofs("My.txt", ios::app);
    ofs << "John" << endl;
    ofs << "25" << endl;
    ofs << "cs" << endl;

    ofs.close();
    // Good practice to realase the resourse
    // i.e. closing the file
    return 0;
}