// Decimal to Binary Conversion...

#include <bits/stdc++.h>
#include <vector>

using namespace std;

void DecimalToBinary(int n)
{
    int num = n;
    vector<int> temp;
    while (n > 0)
    {
        temp.push_back(n % 2);
        n /= 2;
    }
    reverse(temp.begin(), temp.end());
    cout << "Binary of " << num << " is ";
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
    DecimalToBinary(decimal);
    return 0;
}