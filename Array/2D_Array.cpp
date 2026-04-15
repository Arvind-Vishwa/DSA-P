// vector --> dyanamic array due to change it size during runtime
#include <iostream>
#include <vector>
using namespace std;

bool search2D(int arr[][3], int rowSize, int colSize, int target)
{

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    // initialization 2D

    int arr[4][3] = {{10, 20, 30},
                    {11, 22, 33},
                    {12, 13, 14},
                    {10, 9, 8}};
    // cout<<arr[2][1];

    // traversing the 2D array
    int rowSize = 4;
    int colSize = 3;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // colwise
    for (int i = 0; i < colSize; i++)
    {
        for (int j = 0; j < rowSize; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // diagonal wisw
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            if (i == j)
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
    // 2D array with function
    int target = 11;
    bool store = search2D(arr, rowSize, colSize, target);
    cout << store;
}