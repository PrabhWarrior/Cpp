#include <iostream>
using namespace std;

class RangeRover
{
public:
    static int price;
    static string getPrice()
    {
        return to_string(price) + " crore";
    }
};

int RangeRover::price = 2;

int main()
{
    RangeRover r1, r2, r3;
    cout << r1.getPrice() << endl;
    cout << RangeRover::getPrice() << endl;
    cout << r3.getPrice() << endl;

    return 0;
}