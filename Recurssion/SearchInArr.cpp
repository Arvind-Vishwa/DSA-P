// Search in Array
#include <iostream>
using namespace std;

bool searchArray(int arr[], int size, int index, int target)
{
    // base case
    if (index == size)
    {
        return false;
    }
    if(arr[index] == target){
        return true;
    }
    // Recursive
    bool ans = searchArray(arr, size, index + 1, target);
    return ans;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int index = 0;
    int target = 40;
    bool store = searchArray(arr, size, index, target);
    if (store == true)
    {
        cout << "Element founded" << endl;
    }
    else
        cout << "Not founded";
}