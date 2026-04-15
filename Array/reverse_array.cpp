// reverse a array
#include<iostream>
using namespace std;

void reverseArray(int arr[],int size){
    int l=0;
    int h=size-1;
    while(l < h){
        swap(arr[l],arr[h]);
        l++;
        h--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] ={1,2,3,4};
    int size=4;
    reverseArray(arr,size);

    return 0;
}