#include <iostream>
using namespace std;

template <class T>
class Stack
{
private:
    T *stk;
    int top;
    int size;

public:
    Stack(int sz)
    {
        size = sz;
        top = -1;
        stk = new T[size];
    }

    void push(T x);
    T pop();
};

template <class T>
void Stack<T>::push(T x)
{
    if (top == size - 1)
    {
        cout << "Stack is Full" << endl;
    }
    else
    {
        top++;
        stk[top] = x;
    }
}

template <class T>
T Stack<T>::pop()
{
    T x = 0;
    if (top == -1)
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        x = stk[top];
        top--;
    }
    return x;
}

int main()
{
    Stack<float> S1(10);

    S1.push(1.2f);
    S1.push(2.3f);
    S1.push(3.3f);

    cout << S1.pop() << endl;

    return 0;
}