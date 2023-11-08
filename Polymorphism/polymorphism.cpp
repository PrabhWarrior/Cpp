#include <iostream>
using namespace std;

class Car
{
public:
    virtual void start() { cout << "Car Started" << endl; }
    virtual void stop() { cout << "Car Stopped" << endl; }
};

class Innova : public Car
{
public:
    void start() { cout << "Innova Started" << endl; }
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
    Car *p = new Innova();
    p->start();

    p = new Swift();
    p->start();

    return 0;
}