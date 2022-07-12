#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int n)
{
    cout << endl
         << "reverse" << endl;

    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << ", ";
    }
    reverse(arr, sizeof(arr) / sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << ", ";
    }
    return 0;
}