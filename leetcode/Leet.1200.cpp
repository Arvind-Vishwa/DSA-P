// Find minimum absolute difference
// use sorting
// first find global min then find equal to it
#include<bits/stdc++.h>
using namespace std;

void findDiff(vector<int>&arr,int n){
    vector<vector<int>>ans;

    sort(arr.begin(),arr.end());

    for(auto a:ans){
        cout<<a[0]<<" "<<a[1]<<endl;
    }
}

int main(){
    vector<int>arr={4,2,1,3};
    int n=arr.size();
    findDiff(arr,n);
}