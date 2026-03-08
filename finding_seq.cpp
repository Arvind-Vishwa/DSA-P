// finding sequence
#include<bits/stdc++.h>
using namespace std;

int findSeq(vector<int>arr){
    // sort
    sort(arr.begin(),arr.end());
    int count=1;
    int maxLen=1;
    for(int i=1;i<arr.size();i++){
        
        if(arr[i] == arr[i-1]) continue;
        if(arr[i] == arr[i-1]+1){
            count++;
        }else{
            count=1;
        }
        maxLen=max(maxLen,count);
    }
    return maxLen;
}

int main(){
    vector<int>arr={100,4,200,1,3,2};
    int cnt=findSeq(arr);
    cout<<"ans :"<<cnt;
}