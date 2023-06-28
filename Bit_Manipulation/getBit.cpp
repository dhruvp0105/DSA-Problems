// get Bit at any position...

#include <iostream>
using namespace std;

int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

int main()
{
    int n, pos;
    cout << "Enter the Number : ";
    cin >> n;
    cout << "Enter the Position : ";
    cin >> pos;
    cout << getBit(n, pos);
    return 0;
}
