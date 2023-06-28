// Binary to Decimal Convesion...

#include <bits/stdc++.h>
using namespace std;

int BinaryToDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int rem = n % 10;
        ans += x * rem;
        x *= 2;
        n /= 10;
    }
    return ans;
}

int main()
{
    int binary;
    cout << "Enter the Binary Number : ";
    cin >> binary;
    cout << "Decimal Number of " << binary << " is " << BinaryToDecimal(binary);
    return 0;
}