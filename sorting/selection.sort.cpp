#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
    
    for(int i=0;i<n;i++){
        int min_idx=i;
        for(int j=i+1;j<n;j++){
            if(arr[min_idx] > arr[j])
            min_idx=j;
        }
        swap(arr[i],arr[min_idx]);
    }

    // print Array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={64,25,12,22,11};
    int n=5;
    selectionSort(arr,n);
}