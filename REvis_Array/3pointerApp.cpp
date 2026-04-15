// 3 pointer Approach
#include<iostream>
using namespace std;

void sortColor(int arr[],int size){
    int l=0;
    int m=0;
    int h=size-1;
    while(m <= h){
        if(arr[m] == 0){
            swap(arr[l],arr[m]);
            l++;
            m++;
        }
        else if(arr[m] == 1){
            m++;
        }
        else
        {
            swap(arr[m],arr[h]);
            h--;
            m++;
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[6]={2,0,2,1,1,0};
    int size=6;
    sortColor(arr,size);
}