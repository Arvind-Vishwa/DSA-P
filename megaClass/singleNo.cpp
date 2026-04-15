// Rotate image
// m-1
// imp
/*
#include <iostream>

using namespace std;

void rotateImage(int matrix[][3],int row,int col){
    for(int i=0;i<col;i++){
        for(int j=row-1;j>=0;j--){
            cout<<matrix[j][i]<<" ";
        }cout<<endl;
    }
}
int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row=3;
    int col=3;
    rotateImage(matrix,row,col);
}

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateImage(vector<vector<int>> matrix)
{
    int row = matrix.size();
    int col = matrix[0].size();

    // 1 - Transpose it
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < col; j++)
        {
            swap(matrix[i][j], matrix[j][i]); // for inplace
        }
    }

    // Reverseing the row
    for (int i = 0; i < row; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }
}
int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotateImage(matrix);

    return 0;
}