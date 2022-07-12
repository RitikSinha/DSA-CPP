#include <iostream>
using namespace std;
int toBinary(int x)
{
    int binary = 0;
    int power = 1;
    while (x)
    {
        int rem = x % 2;
        binary = (rem * power) + binary;
        power = power * 10;
        x = x / 2;
    }
    return binary;
}
int toDecimal(int x)
{
    int decimal = 0;
    int power = 1;
    while (x)
    {
        int rem = x % 10;
        decimal = (rem * power) + decimal;
        power = power * 2;
        x = x / 10;
    }

    return decimal;
}
int main()
{
    // Write C++ code here
    cout << toDecimal(toBinary(7)) << endl;

    return 0;
}