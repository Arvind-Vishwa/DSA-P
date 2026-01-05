// finding the kth missing positive integer in sorted array
// apply binary search
#include<iostream>
using namespace std;

int findNo(int arr[],int n,int k){

    int s=0;
    int e=n-1;

    while(s <= e){
        int mid=s+(e-s)/2;

        int mis_ele=arr[mid]-(mid+1);
        if(mis_ele < k)
        s=mid+1;
        else
        e=mid-1;
    }
    return s+k;
}

int main(){
    int arr[]={2,3,5,7};
    int n=4;
    int k=2;
    int ans=findNo(arr,n,k);
    cout<<ans;
}