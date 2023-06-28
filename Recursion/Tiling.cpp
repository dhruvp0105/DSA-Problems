// Given a 2*n board size and tiles of a size 2*1 , count the number of ways to tile the given using these tiles ...

#include <iostream>
using namespace std;

int tilingWays(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return tilingWays(n - 1) + tilingWays(n - 2); // vertically + Horizonatally
}
int main()
{
    cout << tilingWays(4);
    return 0;
}