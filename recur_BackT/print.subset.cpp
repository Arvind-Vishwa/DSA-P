// print all subset
#include<iostream>
#include<vector>
using namespace std;

void pS(vector<int>arr,vector<int>&ans,int i){
    //  base case
    if(i == arr.size()){
        for(auto val:ans){
            cout<<val<<" ";
        }
        cout<<endl;

        return;
    }

    ans.push_back(arr[i]);
    pS(arr,ans,i+1);

    // backtracking
    ans.pop_back();
    pS(arr,ans,i+1);
}

int main(){
    vector<int>arr={1,2,3};
    vector<int>ans;
    pS(arr,ans,0);
}