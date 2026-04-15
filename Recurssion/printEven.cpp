// printing even
#include<iostream>
using namespace std;

void printEven(int arr[],int size,int index){
    // base case
    if(index == size){
        return ;
    }
    if(arr[index] %2 == 0){
        cout<<arr[index]<<" ";
    }
    printEven(arr,size,index+1);
}
int main(){
    int arr[] ={2,3,4,5,6};
    int size=5;
    int index=0;
    printEven(arr,size,index);
}