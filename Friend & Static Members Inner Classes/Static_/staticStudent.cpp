#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNumber;
    static int addNo;
    Student(string n)
    {
        addNo++;
        rollNumber = addNo;
        name = n;
    }
    friend ostream &operator<<(ostream &out, Student s);
};
ostream &operator<<(ostream &out, Student s)
{
    out << "Name: " << s.name << endl
        << "Roll number: " << s.rollNumber << endl;
    return out;
}

int Student::addNo = 0;

int main()
{
    Student s1("Prabh");
    Student s2("Daman");
    Student s3("Harman");
    Student s4("Guri");
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;

    cout << "Number of Admission " << Student::addNo << endl;

    return 0;
}