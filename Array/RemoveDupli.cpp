// Removing Duplicate from sorted Array
// Importat for building basic

// Using a Two pointer approach

// In place used
#include <iostream>
using namespace std;

int removeDuplicate(int arr[], int size)
{
    int i = 0;
    int j = 1;
    while (j < size)
    {
        if (arr[i] == arr[j])
        {
            j++;
        }
        else
        {
            i++;
            arr[i] = arr[j];
            j++;
        }
    }
    return i + 1;
}
int main()
{
    int arr[10] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int size = 10;
    int ans = removeDuplicate(arr, size);
    cout << "ans :" << ans;
    return 0;
}