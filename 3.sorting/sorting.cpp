#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sortedSquares(vector<int> &nums)
{
    vector<int> arr(nums.size(), 0);
    for (int i = 0; i < nums.size(); i++)
    {
        arr[i] = nums[i] * nums[i];
    }
    return arr;
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void printArray(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
}
void bubbleSort(int arr[], int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

void insertionSort(int arr[], int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        int current = arr[i];
        int pre = i - 1;
        while (pre >= 0 and arr[pre] > current)
        {
            arr[pre + 1] = arr[pre];
            pre = pre - 1;
        }
        arr[pre + 1] = current;
    }
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int current = arr[i];
        int minPos = i;
        // find min pos
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[minPos])
            {
                minPos = j;
            }
        }
        // swap it with current
        swap(arr[minPos], arr[i]);
    }
}

void countingSort(int arr[], int n)
{
    // find the range
    int range = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > range)
            range = arr[i];
    }
    // create a count vector
    vector<int> freq(range + 1, 0);
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    cout << "frequency" << endl;
    printArray(freq);
    cout << "....." << endl;
    // refill the array
    int j = 0;
    for (int i = 0; i <= range; i++)
    {
        while (freq[i] > 0)
        {
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }
    return;
}
void countingSort(vector<int> arr)
{
    int n = arr.size();
    // find the range
    int range = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > range)
            range = arr[i];
    }
    // create a count vector
    vector<int> freq(range + 1, 0);
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    // refill the array
    int j = 0;
    for (int i = 0; i <= range; i++)
    {
        while (freq[i] > 0)
        {
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }
    return;
}

int main()
{
    vector<int> vec = {5, 4, 3, 2, 1};
    int arr[] = {3, 5, 2, 1, 0, 0, 3, 4};
    int n = sizeof(arr) / sizeof(int);
    // insertionSort(arr, n);
    //  bubbleSort(arr, n);
    // selectionSort(arr, n);
    // vector<int> sq = sortedSquares(vec);
    // countingSort(sq);

    printArray(vec);
    return 0;
}
