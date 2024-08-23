#include <bits/stdc++.h>
using namespace std;

int n;
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j < high; j++)
        if (arr[j] < pivot)
            i++, swap(arr[i], arr[j]);
    swap(arr[i + 1], arr[high]);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
    return (i + 1);
}

void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int binarySearch(int *arr, int hi, int lo, int toSearch)
{
    if (hi < lo)
        return -1;
    int mid = (hi + lo) / 2;
    cout << "Mid = " << mid << "\n";
    if (arr[mid] == toSearch)
        return mid;
    else if (toSearch < arr[mid])
        return binarySearch(arr, mid - 1, lo, toSearch);
    return binarySearch(arr, hi, mid + 1, toSearch);
}

int main()
{
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Sorting Using Quicksort...\n";
    quicksort(arr, 0, n - 1);
    cout << "\nBinary Searching...\n";
    int toSearch;
    cin >> toSearch;
    int result = binarySearch(arr, n - 1, 0, toSearch);
    if (result == -1)
        cout << "Element not found.\n";
    else
        cout << "(After Sorting) Element found at index " << result << "\n";
    return 0;
}