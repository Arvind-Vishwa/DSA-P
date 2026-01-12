// max xor of subarray of size k
#include<iostream>
#include<limits.h>
using namespace std;

int findXor(int arr[],int n,int k){
    int windSum=0;

    for(int i=0;i<k;i++){
        windSum ^=arr[i];

    }
    int max_xor=windSum;
    int cnt=0;
    for(int i=k;i<n;i++){
        windSum ^=arr[cnt];
        cnt++;
        windSum ^=arr[i];
        max_xor=max(max_xor,windSum);
    }
    return max_xor;
}

int main(){
    int arr[]={2,5,8,1,1,3};
    int k=3;
    int n=6;
    int ans=findXor(arr,n,k);
    cout<<"ans "<<ans;
}