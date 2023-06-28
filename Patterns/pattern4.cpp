// Butterfly Pattern...
// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        for (int k = i; k < n - 1; k++)
        {
            cout << "  ";
        }
        for (int k = i; k < n - 1; k++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n - 1; j++)
        {
            cout << "* ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << "  ";
        }
        for (int k = i; k >= 0; k--)
        {
            cout << "  ";
        }
        for (int j = i; j < n - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}