#include <iostream>
using namespace std;
/*
if bill amount < 100 -- no discount
if bill amount >= 100 and less than 500 -- 10% discount
if bill amount >= 500 -- 20% discount

*/
int main()
{
    float billAmount; // on int -- it was coming 399 on 500 but in float it's 400
    cout << "Enter the bill amount" << endl;
    cin >> billAmount;

    if (billAmount < 100)
    {
        cout << "No Discount" << endl;
        cout << "Net Amount is " << billAmount << endl;
    }
    else if (billAmount >= 100 && billAmount < 500)
    {
        billAmount = billAmount - (billAmount * 0.1);
        cout << "10\% Discount" << endl;
        cout << "Net Amount is " << billAmount << endl;
    }
    else
    {
        billAmount = billAmount - (billAmount * 0.2);
        cout << "20\% Discount" << endl;
        cout << "Net Amount is " << billAmount << endl;
    }

    return 0;
}