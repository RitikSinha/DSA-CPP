#include <iostream>
#include <vector>
using namespace std;
int find(int arr[], int key, int n)
{
    // base condition
    if (n == 0)
        return -1;
    // finding element
    if (arr[0] == key)
    {
        return 0;
    }
    int subIndex = find(arr + 1, key, n - 1);
    if (subIndex != -1)
    {
        return subIndex + 1;
    }
    return -1;
}
int lastOccr(int arr[], int key, int n)
{
    // base case
    if (n == 0)
        return -1;
    // find element

    if (arr[n - 1] == key)
        return n - 1;
    int subIndex = lastOccr(arr, key, n - 1);
    if (subIndex != -1)
        return subIndex;
    return -1;
}
int main()
{
    int arr[] = {6, 8, 3, 3, 4, 5, 7, 3, 7};
    int n = sizeof(arr) / sizeof(int);
    // cout << find(arr, 7, 6);
    cout << lastOccr(arr, 3, n);
    return 0;
}