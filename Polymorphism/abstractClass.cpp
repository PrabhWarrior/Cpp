#include <iostream>
using namespace std;

class Car
{
public:
    virtual void start() = 0; // can't create an object of abtract class but can have pointer of it
    virtual void stop() = 0;  // With Pure virtual function , it can be called as interface
};

class Innova : public Car
{
public:
    // If the function is not override then it will aslo become abstract class
    // void start() { cout << "Innova Started" << endl; }
    void stop() { cout << "Innova Stopped" << endl; }
};

class Swift : public Car
{
public:
    void start() { cout << "Swift Started" << endl; }
    void stop() { cout << "Swift Stopped" << endl; }
};

int main()
{
    // Car c;

    // Car *p = new Innova();
    // p->start();

    Car *p = new Swift();
    p->start();

    return 0;
}