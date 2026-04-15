// finding out that the given array is sorted or not
#include <iostream>
using namespace std;

bool isArray(int arr[], int size, int index)
{
    if (index == size)
    {
        return false;
    }
    int currAns = false;
    int recAns = false;

    if (arr[index] < arr[index + 1])
    {
        // incresing order
        currAns = true;
    }
    recAns = isArray(arr, size, index + 1);
    return currAns && recAns;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int index = 0;
    bool store = isArray(arr, size, index);
    if (store == true)
    {
        cout << "Array is Sorted " << endl;
    }
    else
        cout << "Array is not sorted" << endl;
}