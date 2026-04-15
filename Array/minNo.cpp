// Finding Min Num
#include <iostream>
#include <limits.h>
using namespace std;

void findMinNo(int arr[], int size)
{
    int min_no = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (min_no > arr[i])
        {
            min_no = arr[i];
        }
    }
    cout << "Min no: " << min_no;
}
int main()
{

    int arr[5] = {10, 3, 4, 40, 5};
    int size = 5;
    findMinNo(arr, size);
}