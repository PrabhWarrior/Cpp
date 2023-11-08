#include <iostream>
using namespace std;

template <class T>
T maxi(T a, T b)
{
    return a > b ? a : b;
}

int main()
{
    cout << maxi(5.2f, 2.2f) << endl;
    cout << maxi(2, 4) << endl;
    cout << maxi(2.4, 5.6) << endl;
    // cout << maxi(2.4, 5.6f) << endl; no matching function for call
    cout << maxi('b', 'a') << endl;
    return 0;
}