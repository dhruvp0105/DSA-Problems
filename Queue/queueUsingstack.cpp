// Queue using Stack ...

#include <iostream>
#include <stack>
using namespace std;

class queue
{
    stack<int> s1;
    stack<int> s2;

public:
    void push(int x)
    {
        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        s1.push(x);
    }

    int pop()
    {
        if (s1.empty() && s2.empty())
        {
            cout << "Queue is Empty ";
            return -1;
        }

        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }

        int topval = s2.top();
        s2.pop();
        return topval;
    }

    bool empty()
    {
        if (s1.empty() && s2.empty())
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

    cout << q.pop() << endl;
    q.push(50);

    q.pop();
    q.pop();
    q.pop();
    cout << q.pop() << endl;
    cout << q.pop() << endl;

    return 0;
}