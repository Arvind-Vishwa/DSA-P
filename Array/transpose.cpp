#include <iostream>
using namespace std;

void transposeMatrix(int arr[][3], int rowSize, int colSize)
{
    cout << "Before transposing " << endl;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = i; j < colSize; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    cout << "After transposing " << endl;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{

    int arr[3][3] = {{10, 20, 30},
                    {40, 50, 60},
                    {70, 80, 90}};
    int rowSize = 3;
    int colSize = 3;

    transposeMatrix(arr, rowSize, colSize);

    return 0;
}