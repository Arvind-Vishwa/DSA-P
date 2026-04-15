// same data-type element stored
// In array we can store thousand of data of same data type

// creation

//  int arr[1000];
//  int ---> datatype
//  arr--- >array name
// 1000 --> size

// Memory which are you assigning is a Continuous

#include <iostream>
using namespace std;

void solve(int drr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << drr[i] << endl;
    }
}

int main()
{

    // intialize

    int arr[10] = {1, 2, 3, 4}; // remainig will be zero allocated
    fill(arr, arr + 10, 23);    // fill method used
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // input in Array
    //  by loop with help of cin>> arr[i]
    int arr1[4] = {20, 50, 0, 34};
    cout << arr1[3];
    cout << endl;

    // function with Arrays
    int drr[10] = {13, 43, 54, 65};
    solve(drr, 10);
}