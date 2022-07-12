#include <iostream>
int roatedSearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[s] <= arr[mid])
        {
            if (key > arr[s] and key < arr[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        if (arr[e] >= arr[mid])
        {
            if (key > arr[mid] and key < arr[e])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
    }
    return -1;
}
using namespace std;
int main()
{
    int arr[] = {4, 5, 6, 7, 0, 1, 2, 3};
    int n = sizeof(arr) / sizeof(int);
    cout << roatedSearch(arr, n, 2);

    return 0;
}