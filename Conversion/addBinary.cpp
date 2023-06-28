// Binary Addition...

#include <bits/stdc++.h>
using namespace std;

void addBinary(string a, string b)
{
    int carry = 0;
    vector<char> ans;
    int l1 = a.size() - 1;
    int l2 = b.size() - 1;

    while (l1 >= 0 || l2 >= 0)
    {
        int sum = carry;
        if (l1 >= 0)
        {
            sum += a[l1--] - '0';
        }
        if (l2 >= 0)
        {
            sum += b[l2--] - '0';
        }
        ans.push_back(sum % 2 + '0');
        carry = sum / 2;
    }
    if (carry == 1)
    {
        ans.push_back(carry + '0');
    }
    reverse(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans.at(i);
    }
}

int main()
{
    string a, b;
    cout << "Enter the two binary Numbers : ";
    cin >> a >> b;
    addBinary(a, b);
    return 0;
}