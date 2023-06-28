// generate all posible subset of set {a,b,c} ...

#include <iostream>
using namespace std;

void subSets(int arr[], int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        cout << "{ ";
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << "} ";
    }
}

int main()
{
    int arr[3] = {1, 2, 3};
    subSets(arr, 3);
    return 0;
}
