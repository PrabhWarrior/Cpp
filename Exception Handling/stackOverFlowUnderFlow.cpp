#include <iostream>
using namespace std;

class StackOverFlow : exception
{
};
class StackUnderFlow : exception
{
};

class Stack
{
private:
    int *stk;
    int top = -1;
    int size;

public:
    Stack(int ez)
    {
        size = ez;
        stk = new int[size];
    }

    void push(int x)
    {
        if (top == size - 1)
            throw StackOverFlow();
        top++;
        stk[top] = x;
    }

    int pop()
    {
        if (top == -1)
            throw StackUnderFlow();
        return stk[top--];
    }
};

int main()
{
    Stack s(2);
    s.push(3);
    s.push(5);
    // s.push(6);
    s.pop();
    s.pop();
    // s.pop();
    return 0;
}