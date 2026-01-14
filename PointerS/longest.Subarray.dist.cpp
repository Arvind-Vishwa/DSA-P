// longest Subarray distinct atmost two
#include<bits/stdc++.h>
using namespace std;

void findLongSub(int arr[],int n){
    int i=0;
    int j=0;
    unordered_map<int,int>mp;
    int maxLen=INT_MIN;
    while(j < n){

        mp[arr[j]]++;

        while(mp.size() > 2){
            mp[arr[i]]--;

            if(mp[arr[i]] == 0)
            mp.erase(arr[i]);
            i++;
        }
        maxLen=max(maxLen,j-i+1);
        j++;
    }

    cout<<"ans :"<<maxLen;
}

int main(){
    int arr[]={2,2,2,3};
    int n=5;
    findLongSub(arr,n);
}