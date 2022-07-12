#include <iostream>
using namespace std;
void print(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    print(n - 1);
}
void print2(int n)
{
    if (n == 0)
        return;
    print2(n - 1);
    cout << n << " ";
}
int sum(int n)
{
    if (n == 0)
        return 0;
    int digit = n % 10;
    return digit + sum(n / 10);
}
int main()
{
    cout << sum(2);
    return 0;
}