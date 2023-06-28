// print all prime numbers between 2 to n ...

#include <iostream>
using namespace std;

void primeSeive(int n)
{

    int prime[n + 1] = {0};

    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 1;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int n;
    cout << "Enter the range : ";
    cin >> n;
    primeSeive(n);
    return 0;
}