// Count the number of ones in binary representations of a number ...

#include <iostream>
using namespace std;

int numberOfOnes(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    cout << numberOfOnes(n);
    return 0;
}
