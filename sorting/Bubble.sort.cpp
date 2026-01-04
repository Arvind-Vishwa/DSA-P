#include<iostream>
using namespace std;

void BubbleSort(int arr[],int n){

    for(int i=0;i<n;i++){
        bool swapped=false;

        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(!swapped){
            break;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={5,9,3,2,4,8};
    int n=6;
    BubbleSort(arr,n);
}