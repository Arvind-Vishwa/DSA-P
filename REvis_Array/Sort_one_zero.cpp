// sort zero and one
#include<iostream>
using namespace std;

void twoPointerSort(int a[], int size){
    int l=0;
    int h=size-1;
    while(l < h){
        if(a[l] > a[h]){
            swap(a[l] ,a[h]);
            l++;
            h--;
        }
        else{
            if(a[l] ==0)
            l++;

            if(a[h] == 1)
            h--;
        }
    }
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}

void sortZeroOne(int arr[],int size){
    int count_zero,count_one =0;
    for(int i=0;i<size;i++){
        if(0==arr[i]){
            count_zero++;
        }
        else
        count_one++;
    }

    int j=0;
    while(count_zero--){
        arr[j] =0;
        j++;
    }
    while(count_one--){
        arr[j] =1;
        j++;
    }


    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[7]={0,1,0,0,0,1,1};
    int size=7;
    // sortZeroOne(arr,size);
    twoPointerSort(arr,size);
}