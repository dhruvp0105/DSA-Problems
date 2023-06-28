// set Bit at any position...

#include <iostream>
using namespace std;

int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

int main()
{
    int n, pos;
    cout << "Enter the Number : ";
    cin >> n;
    cout << "Enter the Position : ";
    cin >> pos;
    cout << setBit(n, pos);
    return 0;
}
