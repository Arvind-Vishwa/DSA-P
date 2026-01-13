// count every distinct element in window
#include<bits/stdc++.h>
using namespace std;

void findDist(int arr[],int n,int k){
    unordered_map<int,int>mp;
    vector<int>ans;
    for(int i=0;i<k;i++){
        mp[arr[i]]++;
    }
    ans.push_back(mp.size());

    for(int i=k;i<n;i++){
        mp[arr[i]]++;
        mp[arr[i-k]]--;

        if(mp[arr[i-k]] == 0){
            mp.erase(arr[i-k]);
        }
        ans.push_back(mp.size());
    }

    for(auto it:ans){
        cout<<it<<" ";
    }

}

int main(){
    int arr[]={1,2,1,3,4,2,3};
    int n=7;
    int k=4;
    findDist(arr,n,k);
}