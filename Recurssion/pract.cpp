#include<iostream>
using namespace std;

void printArray(int arr[],int index,int size){
    // base case
    if(index >= size){
        return ;
    }
    

    // recursive relation
    printArray(arr,index+1,size);
    cout<<arr[index]<< " ";
}
int main(){
    int arr[] ={10,20,30,40,50};
    int index=0;
    int size =5;
    printArray(arr,index,size);
}