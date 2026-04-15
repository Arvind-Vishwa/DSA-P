// Bubble sort
#include<iostream>
using namespace std;

void bubbleSort(int a[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(a[j] < a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}

    void insertionSort(int a[],int size){
        for(int i=0;i<size;i++){
            for(int j=i+1;j < size-i-1;j++){
                if(a[i] > a[j]){
                    swap(a[i],a[j]);
                    
                }
                
            }
        }
        for(int i=0;i<size;i++){
            cout<<a[i]<<" ";
        }
    }

int main(){
    int a[]={2,5,4,7,6};
    int size=5;
    // bubbleSort(a,size);
    // insertionSort(a,size); galat h logic
}