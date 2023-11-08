#include <iostream>
using namespace std;

class Rational
{
private:
    int p;
    int q;

public:
    Rational(int p = 1, int q = 1)
    {
        this->p = p;
        if (q != 0)
        {
            this->q = q;
        }
    }

    friend ostream &operator<<(ostream &out, Rational &r);
    friend Rational operator+(Rational r1, Rational r2);
};

ostream &operator<<(ostream &out, Rational &r)
{
    out << r.p << "/" << r.q << endl;
    return out;
}

Rational operator+(Rational r1, Rational r2)
{
    Rational r;
    r.p = r1.p * r2.q + r2.p * r1.q;
    r.q = r1.q * r2.q;
    return r;
}

int main()
{
    Rational r1(3, 4), r2(5, 6), r;

    r = r1 + r2;

    cout << r1;
    cout << r2 << endl;

    cout << r;
    return 0;
}