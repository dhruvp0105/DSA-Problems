// Bubble sort...

#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[], int num)
{
    int counter = 1;
    while (counter < num)
    {
        for (int i = 0; i < num - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
        counter++;
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
    BubbleSort(a, n);
    return 0;
}