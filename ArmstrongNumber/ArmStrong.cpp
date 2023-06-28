// check if number is ArmStrong or not...
// Armstrong number is a number that is equal to the sum of cubes of its digits. For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int armstrong;
    cout << "Enter the Number : ";
    cin >> armstrong;
    int n = armstrong;
    int sum = 0;
    while (n > 0)
    {
        int rem = n % 10;
        sum += pow(rem, 3);
        n = n / 10;
    }

    if (sum == armstrong)
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "Not Armstrong" << endl;
    }
    return 0;
}