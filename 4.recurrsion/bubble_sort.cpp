#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

void bubbleSort(int arr[], int n)
{
}

int main()
{
    int arr[] = {6, 8, 3, 3, 4, 5, 7, 3, 7};
    int n = sizeof(arr) / sizeof(int);
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}