#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    int mathMarks;
    int phyMarks;
    int chemMarks;

public:
    Student(int rollNo, string name, int mathMarks, int phyMarks, int chemMarks)
    {
        this->rollNo = rollNo;
        this->name = name;
        this->mathMarks = mathMarks;
        this->phyMarks = phyMarks;
        this->chemMarks = chemMarks;
    }

    int totalMarks()
    {
        return mathMarks + phyMarks + chemMarks;
    }

    char getGrade()
    {
        float average = (totalMarks() / 3);
        if (average > 60)
        {
            return 'A';
        }
        else if (average >= 40 && average < 60)
        {
            return 'B';
        }
        else
        {
            return 'C';
        }
    }
};

int main()
{
    int rollNo;
    string name;
    int maths, physics, chemistery;
    cout << "Enter Roll number of a Student" << endl;
    cin >> rollNo;
    cout << "Enter Name of a Student" << endl;
    cin >> name;
    cout << "Enter Marks in 3 Subjects" << endl;
    cin >> maths >> physics >> chemistery;
    cout << endl;
    Student s(rollNo, name, maths, physics, chemistery);
    cout << "Total Marks of a Student: " << s.totalMarks() << endl;
    cout << "Grade of a Student: " << s.getGrade() << endl;
    return 0;
}