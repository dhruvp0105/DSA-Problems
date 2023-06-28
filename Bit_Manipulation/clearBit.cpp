// clear Bit at any position...

#include <iostream>
using namespace std;

int clearBit(int n, int pos)
{
    int mask = ~(1 << pos);
    return (n & mask);
}

int main()
{
    int n, pos;
    cout << "Enter the Number : ";
    cin >> n;
    cout << "Enter the Position : ";
    cin >> pos;
    cout << clearBit(n, pos);
    return 0;
}
