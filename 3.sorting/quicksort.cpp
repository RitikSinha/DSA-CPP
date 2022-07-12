#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int> &a, int s, int e)
{
    int pivot = a[e];
    int i = s - 1;
    for (int j = s; j < e; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[e]);

    return i + 1;
}
void quicksort(vector<int> &a, int s, int e)
{
    // base case
    if (s >= e)
        return;
    // recurrsive call
    int partionIndex = partition(a, s, e);
    quicksort(a, s, partionIndex - 1);
    quicksort(a, partionIndex + 1, e);
}
int main()
{
    vector<int> arr = {5, 10, 2, 4, 0, 6, 7};
    quicksort(arr, 0, arr.size() - 1);
    for (int x : arr)
        cout << x << "  ";
    return 0;
}