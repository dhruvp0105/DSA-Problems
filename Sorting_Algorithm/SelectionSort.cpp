// Selection sort...

#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[], int num)
{
    for (int i = 0; i < num - 1; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[i], arr[j]);
            }
        }
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
    SelectionSort(a, n);
    return 0;
}