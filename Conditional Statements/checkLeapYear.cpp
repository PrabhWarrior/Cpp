#include <iostream>
using namespace std;

/*
All years are leap year which are perfectly divisible by 4
except century years(years ending with 0) which is leap year only it is
perfectly divisible by 400.

2012,2004,1968 -- leap years
1200,1600,2000,2400 -- leap years
1700,1800,1900 -- not leap years

*/

int main()
{
    int year;
    cout << "Enter the year" << endl;
    cin >> year;

    if ((year % 100 == 0))
    {
        if ((year % 400) == 0)
        {
            cout << "Leap Year";
        }
        else
        {
            cout << "Not a leap year";
        }
    }
    else if (year % 4 == 0)
    {
        cout << "Leap Year";
    }
    else
    {
        cout << "Not a leap year";
    }

    return 0;
}