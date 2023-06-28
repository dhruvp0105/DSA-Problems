#include <iostream>
using namespace std;
#define n 20

class queue
{
    int *arr;
    int front;
    int back;

public:
    queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int x)
    {
        if (back == n - 1)
        {
            cout << "Queue overflow" << endl;
            return;
        }
        back++;
        arr[back] = x;

        if (front == -1)
        {
            front++;
        }
    }

    void pop()
    {
        if (front == -1 || front > back)
        {
            cout << "Queue is Empty";
            return;
        }
        front++;
    }

    int peek()
    {
        if (front == -1 || front > back)
        {
            cout << "Queue is Empty ";
            return -1;
        }
        return arr[front];
    }

    bool empty()
    {
        if (front > back)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout << q.peek() << endl;

    q.pop();
    q.pop();
    q.pop();
    cout << q.peek() << endl;

    q.pop();
    cout << q.peek() << endl;

    return 0;
}