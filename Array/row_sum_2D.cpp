#include <iostream>
using namespace std;

void findSumRow(int arr[][3], int rowSize, int colSize)
{
    int sum = 0;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }
}
int main()
{
    int arr[3][3] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int rowSize = 3;
    int colSize = 3;
    findSumRow(arr, rowSize, colSize);
}