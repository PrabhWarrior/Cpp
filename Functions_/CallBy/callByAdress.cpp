#include <iostream>
using namespace std;

// Indirectly pointer can modiy actual parameters

// Formal parameters -- pointers
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10, y = 20;
    // Actual parameters -- Adresses
    swap(&x, &y);

    cout << x << " " << y;

    return 0;
}