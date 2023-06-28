// update Bit at any position...

#include <iostream>
using namespace std;

int updateBit(int n, int pos, int val)
{
    int mask = ~(1 << pos);
    n = n & mask;
    return (n | (val << pos));
}

int main()
{
    int n, pos, val;
    cout << "Enter the Number : ";
    cin >> n;
    cout << "Enter the Position : ";
    cin >> pos;
    cout << "Enter the set Bit : ";
    cin >> val;
    cout << updateBit(n, pos, val);
    return 0;
}
