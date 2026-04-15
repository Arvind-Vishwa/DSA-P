
// Finding a Max number in Array
#include <iostream>
#include <limits.h>
using namespace std;

void findMax(int arr[], int size)
{
    int max_no = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        max_no = max(arr[i], max_no);
    }
    cout << "max no: " << max_no;
}

int main()
{
    int arr[5] = {10, 30, 20, 50, 30};
    int size = 5;
    findMax(arr, size);
}