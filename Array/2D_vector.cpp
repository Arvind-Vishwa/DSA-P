#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>>arr(4,vector<int>(3,23));
    // 4--> no of rows
    // 3 --> in every row has 3 col with initialized value is 0
    int rowSize=arr.size();
    int colSize = arr[0].size();

    for(int i=0;i<rowSize;i++){
        for(int j=0;j<colSize;j++){
            cout<<arr[i][j]<<" ";
        }
    }
// 2D vector passing in function
// solve(vector<vector<int>>arr,int target)
// int rowSize = arr.size();
// int colSize = arr[0].size();
    return 0;
}