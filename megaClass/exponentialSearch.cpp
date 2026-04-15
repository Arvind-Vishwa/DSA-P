// Exponential Search
// Doubling search
// applied only in sorted
#include <iostream>
using namespace std;

int bs(int arr[], int start, int end, int x)
{
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == x)                  // binary Search
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            end = mid - 1;
        }
        else
            start = mid + 1;

        mid = start + (end - start) / 2;
    }
    return -1;
}

int expSearch(int arr[], int n, int x)
{
    if (arr[0] == x)
    {
        return 0;
    }
    int i = 1;
    while (i < n && arr[i] <= x)
    {
        i = i * 2; // i=i<<1
    }
    return bs(arr, i / 2, min(i, n - 1), x);
}
int main()
{
    int arr[] = {3, 4, 5, 6, 11, 13, 14, 15, 56, 70};
    int n = sizeof(arr) / sizeof(int);
    int x = 13;
    int ans = expSearch(arr, n, x);
    cout << "Ans index :" << ans;
    return 0;
}