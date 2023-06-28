// Decimal to Octal Conversion...

#include <bits/stdc++.h>
#include <vector>

using namespace std;

void DecimalToOctal(int n)
{
    int num = n;
    vector<int> temp;
    while (n > 0)
    {
        temp.push_back(n % 8);
        n /= 8;
    }
    reverse(temp.begin(), temp.end());
    cout << "Octal of " << num << " is ";
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
    DecimalToOctal(decimal);
    return 0;
}