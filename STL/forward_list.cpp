#include <iostream>
#include <forward_list>
using namespace std;

// forward_list -- singly linked list

int main()
{
    forward_list<int> l = {2, 4, 6, 8, 10};
    l.push_front(20);
    l.push_front(30);

    l.pop_front();

    forward_list<int>::iterator itr;
    cout << "Using Iterator : " << endl;
    for (itr = l.begin(); itr != l.end(); itr++)
    {
        cout << ++*itr << endl;
        // It has modify the lalues
    }

    cout << "Using for each loop : " << endl;
    for (int x : l)
        cout << x << endl;

    return 0;
}