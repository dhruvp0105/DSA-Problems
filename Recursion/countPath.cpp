// count the Number of paths possible from start point to end point ...

#include <iostream>
using namespace std;

int countPath(int start, int end)
{
    if (start == end)
    {
        return 1;
    }
    if (start > end)
    {
        return 0;
    }

    int count = 0;
    for (int i = 1; i <= 6; i++)
    {
        count = count + countPath(start + i, end);
    }
    return count;
}
int main()
{
    cout << countPath(0, 3);
    return 0;
}