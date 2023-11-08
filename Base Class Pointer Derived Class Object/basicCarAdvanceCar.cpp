#include <iostream>
using namespace std;

class BasicCar
{
public:
    void start()
    {
        cout << "Car Started" << endl;
    }
};

class AdvanceCar : public BasicCar
{
public:
    void startCooling()
    {
        cout << "Cooling is started in car" << endl;
    }
};

int main()
{
    /*
    for example there is a advanace car infront of you but you have only
    knowledge of basic car... then you will only use basic car functions only in the
    advance car.. bcs you don't have knowledge of advance car..
    */
    AdvanceCar a;
    BasicCar *p = &a;
    p->start();
    // p->startCooling(); // can only access basic functions of car.. bcs pointer of basic car is there

    BasicCar b;
    // AdvanceCar *ptr = &b; // Logically wrong.. you dont't have functions like cooling in basic car
    return 0;
}