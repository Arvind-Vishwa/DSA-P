#include <iostream>
#include <limits.h>
using namespace std;

void find2DArray(int arr[][3], int rowSize, int colSize)
{

    int min_no = INT_MAX;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            min_no = min(min_no, arr[i][j]);
        }
    }
    cout << "Min :" << min_no;
}
int main()
{

    int arr[3][3] = {2, 4, 2, 5, 7, 3, 2, 6, 8};
    int rowSize = 3;
    int colSize = 3;
    find2DArray(arr, rowSize, colSize);
}