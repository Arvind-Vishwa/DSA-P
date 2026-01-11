// Moves all zero to end
#include<iostream>
using namespace std;

void moveZero(int arr[],int n){

    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            arr[cnt]=arr[i];
            cnt++;
        }
    }

    while(cnt < n){
        arr[cnt]=0;
        cnt++;
    }
    int j=0;
    while(j < n){
        cout<<arr[j]<<" ";
        j++;
    }
}

int main(){
    int arr[]={1,2,0,4,3,0,5,0};
    int n=8;

    moveZero(arr,n);
}