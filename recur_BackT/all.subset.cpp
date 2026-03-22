// printing all the subset
#include<iostream>
#include<vector>
using namespace std;

void getAllSubset(vector<int>&nums,vector<int>&ans,int i,vector<int>&allSubset){
    if(i == nums.size()){
        for(auto val:ans){
            allSubset.push_back(val);
        }
        
        return;
    }

    // include
    ans.push_back(nums[i]);
    getAllSubset(nums,ans,i+1,allSubset);

    // backtracking
    ans.pop_back();

    // exclude
    getAllSubset(nums,ans,i+1,allSubset);
}
vector<int> subset(vector<int>&nums){
    vector<int>allSubset;
    vector<int>ans;
    getAllSubset(nums,ans,0,allSubset);
    return allSubset;
}

int main(){
    vector<int>nums={1,2,3};
    vector<int>ans=subset(nums);
    for(auto val:ans){
        cout<<val<<" ";
    }cout<<endl;
}