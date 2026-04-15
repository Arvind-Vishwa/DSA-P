// Moving all negative number to left side of Array
// Dutch flag algorithm
// Two pointer
#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {1, 2, -3, 4, -5, 6};
    int l = 0;
    int h = 5;
    while (l < h)
    {
        if (arr[l] < 0)
        {
            l++;
        }
        else if (arr[h] > 0)
        {
            h--;
        }
        else
        {
            swap(arr[l], arr[h]);
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}