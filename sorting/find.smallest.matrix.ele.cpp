// find the smallest element in matrix

#include <iostream>
#include <limits.h>
using namespace std;

int findSmallest(int arr[][4], int row, int col, int k)
{

    int ans = 0;
    // k=k-1;
    while (k>0)
    {
        k--;
        int min_ele = INT_MAX;
        int min_i=-1;
        int min_j=-1;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {

                if (min_ele > arr[i][j] && arr[i][j] != -1)
                {
                    min_ele = arr[i][j];
                    min_i=i;
                    min_j=j;
                }
            }
        }
        if(min_i != -1){
            arr[min_i][min_j]=-1;
        }
        ans = min_ele;
        
    }
    return ans;
}

int main()
{
    int arr[][4] = {{10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {24, 29, 37, 48},
                    {32, 33, 39, 50}};
    int row = 4;
    int col = 4;
    int k = 4;
    int ans = findSmallest(arr, row, col, k);
    cout << "ans :" << ans << endl;
}