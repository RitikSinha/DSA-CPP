#include <iostream>
using namespace std;

void updateArray(int x, int pos, int arr[], int size)
{
    int index = pos - 1;
    for (int i = size; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = x;
}
int linearSearch(int arr[], int ele, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (ele == arr[i])
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int ele, int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (ele == arr[mid])
        {
            return mid;
        }
        else if (ele < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    cout << "Array operations" << endl;
    cout << "enter 5 elements" << endl;
    // for (int i = 5; i < 10; i++)
    // {
    //     int x;
    //     cin >> x;
    //     arr[i] = x;
    // }

    int size = sizeof(arr) / sizeof(int);
    // updateArray(7, 1, arr, size);
    // cout << linearSearch(arr, 15, size) << endl;
    cout << binarySearch(arr, 7, size) << endl;
    for (int x : arr)
    {
        cout << x << ",";
    }
    return 0;
}