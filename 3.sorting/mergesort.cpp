#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int s, int e)
{
    int i = s;
    int m = (e + s) / 2;
    int j = m + 1;
    vector<int> temp;
    // merging two sorted array
    while (i <= m and j <= e)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    // if one of the two array will be longer
    // then copy the rest of item in temp array
    while (i <= m)
    {
        temp.push_back(arr[i++]);
    }
    while (j <= e)
    {
        temp.push_back(arr[j++]);
    }

    // copy back from temp array to original array;
    int k = 0;
    for (int index = s; index <= e; index++)
    {
        arr[index] = temp[k++];
    }
    return;
}

void mergesort(vector<int> &arr, int s, int e)
{
    // base case
    if (s >= e)
        return;
    int m = (e + s) / 2;
    mergesort(arr, s, m);
    mergesort(arr, m + 1, e);
    return merge(arr, s, e);
}

int main()
{
    vector<int> arr = {6, 4, 3, 5, 1};
    mergesort(arr, 0, arr.size() - 1);
    for (int x : arr)
        cout << x << ",";

    return 0;
}