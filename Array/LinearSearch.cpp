// Linear Search
#include <iostream>
using namespace std;

void printLinear(int arr[], int size, int target)
{
    bool flag;
    for (int i = 0; i < size; i++)
    {
        if (target == arr[i])
        {
            cout << "Found";
            flag = true;
            break;
        }
    }
    if (!flag)
    {
        cout << "Not found";
    }
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int target = 90;
    printLinear(arr, 5, target);
}