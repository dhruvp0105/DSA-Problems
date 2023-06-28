// find 2 unique numbers in an array where all numbers are except two, are present twice ...

#include <iostream>
using namespace std;

int setbit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

void findUnique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }

    int tempxor = xorsum;

    int setBit = 0;
    int pos = 0;
    while (setBit != 1)
    {
        setBit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }

    int newxor = 0;
    for (int i = 0; i < n; i++)
    {
        if (setbit(arr[i], pos - 1))
        {
            newxor = newxor ^ arr[i];
        }
    }

    cout << newxor << endl;
    cout << (tempxor^newxor);
}

int main()
{
    int n;
    cout << "Enter the size of an array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    findUnique(arr, n);
    return 0;
}
