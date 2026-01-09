// Reverse a Array
#include<iostream>
using namespace std;

void findReverse(int arr[],int n){
    int i=0;
    int j=n-1;

    while(i < j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,4,3,2,6,5};
    int n=6;

    findReverse(arr,n);
}