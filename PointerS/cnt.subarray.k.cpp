// find subarray count with k odds
#include<bits/stdc++.h>
using namespace std;

void findSub(int arr[],int n,int k){
    int ans=0;
    // int maxlen=INT_MIN;
    for(int i=0;i<n;i++){
        int currSum=0;
        
        for(int j=i;j<n;j++){

            if(arr[j]%2 != 0){
                // odd find
                currSum++;
            }
            if(currSum == k)
            ans++;
        }
    }
    cout<<"ans :"<<ans;
}

int main(){
    int arr[]={2,2,5,6,9,2,11};
    int n=7;
    int k=2;
    findSub(arr,n,k);
}