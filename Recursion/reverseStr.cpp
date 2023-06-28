// reverse string using recursion ...

#include <iostream>
using namespace std;

void reverse(string s)
{

    if (s.length() == 0)
    {
        return;
    }
    string rs = s.substr(1);
    reverse(rs);
    cout << s[0];
}

int main()
{
    string str;
    cout << "Enter the string : ";
    cin >> str;
    reverse(str);
}