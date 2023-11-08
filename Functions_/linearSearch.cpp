#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int &target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

int main()
{
    int arr[5] = {4, 5, 87, 9, 6};
    int target = 5;

    int idx = linearSearch(arr, 5, target);
    cout << idx << endl;

    return 0;
}