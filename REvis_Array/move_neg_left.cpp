// move negative element to left side
#include<iostream>
using namespace std;

void leftSide(int arr[],int size){
    int i=0;
    int j=1;
    while(j<size){
        if(arr[j] < 0){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
        else 
        j++;
    }
    for(int k=0;k<size;k++){
        cout<<arr[k]<<" ";
    }
}

int main(){
    int arr[6]={-1,2,-3,4,-5,6};
    int size=6;
    leftSide(arr,size);
}