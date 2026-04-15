// Merge sort
// best case == worst case --> O(nlogn)
#include <iostream>
using namespace std;

void merge(int arr[], int s, int e, int mid)
{

    // create left and right arrays
    int leftLength = mid - s + 1;
    int rightLength = e - mid;

    int *leftArr = new int[leftLength];
    int *rigthArr = new int[rightLength];

    // fill or copy the left and right arrays
    // copy original array --> values
    // original array ka starting index

    int index = s;
    // copying into left array
    for (int i = 0; i < leftLength; i++)
    {
        leftArr[i] = arr[index];
        index++;
    }
    // copying into right array
    index = mid + 1;
    for (int i = 0; i < rightLength; i++)
    {
        rigthArr[i] = arr[index];
        index++;
    }
    // merge logic
    int i = 0;
    int j = 0;
    int mainArrayIndex = s;

    while (i < leftLength && j < rightLength)
    {
        if (leftArr[i] < rigthArr[j])
        {
            arr[mainArrayIndex] = leftArr[i];
            i++;
            mainArrayIndex++;
        }

        else
        {
            arr[mainArrayIndex] = rigthArr[j];
            j++;
            mainArrayIndex++;
        }
    }
    // handling 2 cases discussed above in merge 2 sorted arrays
    while (i < leftLength)
    {
        arr[mainArrayIndex] = leftArr[i];
        i++;
        mainArrayIndex++;
    }
    while (j < rightLength)
    {
        arr[mainArrayIndex] = rigthArr[j];
        j++;
        mainArrayIndex++;
    }

    // delete heap memory
    delete[] leftArr;
    delete[] rigthArr;
}
void mergeSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    int mid = (s + e) / 2;
    // left part recursion se solve karwao

    mergeSort(arr, s, mid);

    // right part recursion se solve karwao
    mergeSort(arr, mid + 1, e);

    // dono parts ko merge kardo
    merge(arr, s, e, mid);
}

int main()
{
    int arr[] = {10, 80, 110, 90, 50, 30, 40, 20};
    int size = 8;
    int s = 0;
    int e = size - 1;

    cout << "Before : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    mergeSort(arr, s, e);

    // printing entire array
    cout << "After :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
