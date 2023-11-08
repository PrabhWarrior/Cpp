#include <iostream>
using namespace std;

int main()
{

    // const int x = 10;
    // int *ptr = &x;
    // can't intialize varible(int *) with an rvalue of type const int

    // const int x = 10;
    // const int *ptr = &x; // Pointer of type integer constant

    // ++*ptr; // can't modify the value

    // int x = 10;
    // const int *ptr = &x; // Pointer of type integer constant
    // const int *ptr = &x; // Pointer to a constant integer

    // ++*ptr; // can't modify the value even though the x is not constant

    // int x = 10;
    // const int *ptr = &x;

    // int y = 20;
    // ptr = &y; // can change where it's pointint to but can't change the value at their

    // ++*ptr; // still can't do that

    // 3.
    // int x = 10;
    // int *const ptr = &x; // ptr is constant of type integer pointer

    // ptr = &y; // can't assign this ptr to another variable
    // ++*ptr; // can modify the value

    // 4.
    // int x = 10;
    // const int *const ptr = &x; // constant pointer to an integer constatn

    // ptr = &y; // can't assign this ptr to another variable
    // ++*ptr; // can't modify the value

    return 0;
}