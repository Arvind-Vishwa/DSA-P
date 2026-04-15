// vector Array
#include<iostream>
#include<vector>
using namespace std;

void search2DArray(vector<vector<int>>arr,int target){
    int rowSize=arr.size();
    int colSize=arr[0].size();

    for(int i=0;i<rowSize;i++){
        for(int j=0;j<colSize;j++){
            if(arr[i][j] == target){
                cout<<"found element"<<endl;
                break;
            }
        }cout<<"not found"<<endl;
    }
}

int main(){
    vector<vector<int>>arr(4,vector<int>(3,0));
    int rowSize=arr.size();
    int colSize=arr[0].size();

    for(int i=0;i<rowSize;i++){
    for(int j=0;j<colSize;j++)
    cin>>arr[i][j];
    }
    int target=40;
    search2DArray(arr,target);
}