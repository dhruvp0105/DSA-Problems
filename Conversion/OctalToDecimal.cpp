// Octal to Decimal Conversion...

#include <bits/stdc++.h>
using namespace std;

int OctalToDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int rem = n % 10;
        ans += x * rem;
        x *= 8;
        n /= 10;
    }
    return ans;
}

int main()
{
    int octal;
    cout << "Enter the Octal Number : ";
    cin >> octal;
    cout << "Decimal Number of " << octal << " is " << OctalToDecimal(octal);
    return 0;
}