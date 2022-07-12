#include <iostream>
using namespace std;

int arraySum(int arr[], int sum, int n)
{
    if (n == -1)
        return sum;
    sum = arr[n] + sum;
    n--;
    return arraySum(arr, sum, n);
}
int arrSum(int *arr, int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return arr[0];
    return arr[0] + arrSum(arr + 1, n - 1);
}
int linearSerach(int *arr, int k, int n)
{
    // basecase
    if (n == 0)
        return -1;
    if (k == arr[0])
        return true;

    return linearSerach(arr + 1, k, n - 1);
}
int main()
{

    int arr[] = {5, 6, 7, 3, 4};

    // cout << arraySum(arr, 0, 4) << endl;
    // cout << arrSum(arr, 5);
    cout << linearSerach(arr, 6, 5);
    return 0;
}