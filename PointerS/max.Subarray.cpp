// max subarray of size k
#include<iostream>
#include<limits.h>
using namespace std;

void findMax(int arr[],int n,int k){
    int windowSum=0;

    for(int i=0;i<k;i++){
        windowSum +=arr[i];
    }
    int max_sum=windowSum;
    int cnt=0;
    for(int i=k;i<n;i++){
        // previous ele ko subtract
        windowSum -=arr[cnt];
        cnt++;
        // next ele ko add
        windowSum +=arr[i];
        max_sum=max(max_sum,windowSum);
    }

    cout<<"ans :"<<max_sum;
}

int main(){
    int arr[]={100,200,300,400};
    int n=4;
    int k=2;
    findMax(arr,n,k);
}