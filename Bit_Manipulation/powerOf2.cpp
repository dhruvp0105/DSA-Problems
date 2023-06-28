// Write a program to check if a given number is power of 2 ...

#include <iostream>
using namespace std;

int isPowerOf2(int n)
{
    return (n && !(n & n - 1));
}

int main()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    cout << isPowerOf2(n);
    return 0;
}
