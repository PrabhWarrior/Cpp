#include <iostream>
#include <fstream>
using namespace std;

class Item
{
public:
    string name;
    int price;
    float quantity;
    Item()
    {
    }
    Item(string n, int p, float q)
    {
        name = n;
        price = p;
        quantity = q;
    }

    friend ofstream &operator<<(ofstream &ofs, Item &i);
    friend ifstream &operator>>(ifstream &ifs, Item &i);
    friend ostream &operator<<(ostream &out, Item &i);
};
ofstream &operator<<(ofstream &ofs, Item &i)
{
    ofs << i.name << endl;
    ofs << i.price << endl;
    ofs << i.quantity << endl;
    return ofs;
}

ifstream &operator>>(ifstream &ifs, Item &i)
{
    ifs >> i.name;
    ifs >> i.price;
    ifs >> i.quantity;
    return ifs;
}

ostream &operator<<(ostream &out, Item &i)
{
    out << i.name << endl;
    out << i.price << endl;
    out << i.quantity << endl;
    return out;
}

int main()
{
    Item i1("Wheat", 750, 1.5);

    ofstream ofs("Exercise.txt");
    ofs << i1;
    ofs.close();

    ifstream ifs;
    ifs.open("Exercise.txt");
    Item i2;
    ifs >> i2;
    ifs.close();
    cout << i2;

    return 0;
}