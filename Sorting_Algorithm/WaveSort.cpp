#include <bits/stdc++.h>
using namespace std;

void waveSort(int arr[], int n)
{
    for (int i = 1; i <= n; i += 2)
    {
        if (arr[i] > arr[i - 1])
        {
            swap(arr[i], arr[i - 1]);
        }
        if (arr[i] > arr[i + 1] && i <= n - 2)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int n;
    cout << "Enter the total No. of elements : ";
    cin >> n;
    int a[n];
    cout << "Enter the Numbers : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    waveSort(a, n);

    cout << "Sorted Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}