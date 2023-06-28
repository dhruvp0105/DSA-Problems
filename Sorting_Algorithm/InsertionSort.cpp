// Insertion sort...

#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int num)
{
    for (int i = 0; i < num; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    cout << "Sorted Array : ";
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
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
    InsertionSort(a, n);
    return 0;
}