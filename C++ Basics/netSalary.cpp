#include <iostream>
using namespace std;

/*
1. Basic Salary
2. Percentage of Allowances
3. Percentage of Deductions

NetSalary = Basic Salary + Basic Salary * Percentage of Allowances - Basic Salary * Percentage of Deductions

*/

int main()
{
    float basicSalary, percentageOfAllowances, percentageOfDeductions;
    float netSalary;
    cout << "Enter your basic salary " << endl;
    cin >> basicSalary;

    cout << "Enter Percentage of Allowances " << endl;
    cin >> percentageOfAllowances;

    cout << "Enter Percentage of Deductions " << endl;
    cin >> percentageOfDeductions;

    netSalary = basicSalary + (basicSalary * percentageOfAllowances / 100) - (basicSalary * percentageOfDeductions / 100);

    cout << netSalary << endl;

    return 0;
}