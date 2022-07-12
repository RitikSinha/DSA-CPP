#include <iostream>
using namespace std;
int binarySearch(int arr[], int key, int n, int l, int r)
{
    if (l > r)
        return -1;
    int mid = (l + r) / 2;
    if (arr[mid] == key)
        return mid;
    if (arr[mid] > key)
    {
        r = mid - 1;
        return binarySearch(arr, key, n, l, r);
    }
    else
    {
        l = mid + 1;
        return binarySearch(arr, key, n, l, r);
    }
    return -1;
}
int main()
{
    int arr[] = {33, 35, 36, 67, 78};
    int key = 36;
    cout << binarySearch(arr, key, 5, 0, 4) << endl;
    return 0;
}
