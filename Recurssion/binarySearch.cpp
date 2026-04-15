// binary Search by Recursion

#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int s,int e,int target){
    // base case
    if(s > e){
        return -1;
    }
    
    int mid =(s+e)/2;

    if(arr[mid] == target){
        return mid;
    }

    if(target > arr[mid]){
        // right
        binarySearch(arr,size,mid+1,e,target);
    }
    else{
        // left
        binarySearch(arr,size,s,mid-1,target);
    }
}
int main(){
    int arr[] ={10,20,30,40,50};
    int size =5;
    int s=0;
    int e=size-1;
    int target =40;
    cout<<binarySearch(arr,size,s,e,target);

}