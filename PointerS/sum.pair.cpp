// Sum pair count
#include<iostream>
#include<limits.h>
#include<algorithm>
using namespace std;

int findPair(int arr[],int n,int target){
    // bruteforce
    int cntPair=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j] == target){
                cntPair++;
            }
        }
    }
    return cntPair;
}

int main(){
    int arr[]={1,5,7,-1,5};
    int n=5;
    int target=6;
    int ans=findPair(arr,n,target);
    cout<<"ans :"<<ans<<endl;
}

