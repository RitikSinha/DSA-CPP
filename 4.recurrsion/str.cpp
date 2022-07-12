#include <iostream>
#include <string>
using namespace std;

void reverse(string &str, int l, int r)
{
    if (l > r)
        return;
    swap(str[l], str[r]);
    l++;
    r--;

    reverse(str, l, r);
}
int isPallen(string str, int l, int r)
{
    // base case
    if (l > r)
        return 1;
    if (str[l] != str[r])
        return 0;
    else
    {
        l++;
        r--;
        return isPallen(str, l, r);
    }
    return 1;
}
void substring(string str, int n)
{
    if (n == 0)
        return;
    if (n == str.length())
        cout << " ";
    cout << str.substr(0, n) << ", ";
    n--;
    substring(str, n);
}
int main()
{
    string name = "ABC";
    // reverse(name, 0, name.length() - 1);
    // cout << name << endl;
    // cout << isPallen(name, 0, name.length() - 1);
    substring(name, name.length());

    return 0;
}