#include <iostream>
using namespace std;

int maxCut(int n, int a, int b, int c)
{
    // base case
    if (n == 0)
        return 0;
    if (n < 0)
        return -1;
    int res = max(maxCut(n - a, a, b, c), maxCut(n - b, a, b, c), maxCut(n - c, a, b, c));
    if (res == -1)
        return -1;
    return (res + 1);
}
int main()
{
    cout << max(3, 4);
    return 0;
}