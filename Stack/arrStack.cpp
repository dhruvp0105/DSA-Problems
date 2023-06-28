#include <iostream>
using namespace std;
#define n 100

class stack
{
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack Overflow";
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is Empty";
        }
        top--;
    }

    int Top()
    {
        if (top == -1)
        {
            cout << "No Elements in stack ";
            return -1;
        }
        return arr[top];
    }

    bool isEmpty()
    {
        return top == -1;
    }
};
int main()
{
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout << st.Top() << endl;
    st.pop();
    st.pop();
    cout << st.Top() << endl;
    st.pop();
    st.pop();
    cout << st.Top() << endl;
    return 0;
}