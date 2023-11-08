#include <iostream>
#include <fstream>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;
    string branch;
    friend ofstream &operator<<(ofstream &ofs, Student &s);
    friend ifstream &operator>>(ifstream &ifs, Student &s);
    friend ostream &operator<<(ostream &out, Student &s);
};

ofstream &operator<<(ofstream &ofs, Student &s)
{
    ofs << s.name << endl;
    ofs << s.rollNo << endl;
    ofs << s.branch << endl;

    return ofs;
}

ifstream &operator>>(ifstream &ifs, Student &s)
{
    ifs >> s.name;
    ifs >> s.rollNo;
    ifs >> s.branch;

    return ifs;
}

ostream &operator<<(ostream &out, Student &s)
{
    out << "Name " << s.name << endl;
    out << "Roll No " << s.rollNo << endl;
    out << "Branch " << s.branch << endl;

    return out;
}

int main()
{
    Student s1;

    // Writing an object in a file

    // s1.name = "Prabh";
    // s1.rollNo = 14;
    // s1.branch = "IT";

    // ofstream ofs("Student.txt");
    // ofs << s1;

    // ofs.close();

    // Reading an object from a file
    ifstream ifs("Student.txt");

    ifs >> s1;
    cout << s1;

    ifs.close();

    return 0;
}