// Decimal to Hexadecimal Conversion...

#include <bits/stdc++.h>
#include <vector>

using namespace std;

void DecimalToHex(int n)
{
    int num = n;
    vector<char> temp;
    while (n > 0)
    {
        int rem = n % 16;
        if (rem < 10)
        {
            temp.push_back(rem + '0');
        }
        else if (rem >= 10 && rem <= 15)
        {
            temp.push_back(rem + 'A' - 10);
        }
        n /= 16;
    }
    reverse(temp.begin(), temp.end());
    cout << "Hexadecimal of " << num << " is ";
    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp.at(i);
    }
}

int main()
{
    int decimal;
    cout << "Enter the Decimal Number : ";
    cin >> decimal;
    DecimalToHex(decimal);
    return 0;
}