// Reverse a array using recursion

#include<iostream>
using namespace std;

void rec(int arr[],int i,int j){
    // base case
    if(i > j){
        return; 
    }
    // relation
    swap(arr[i],arr[j]);
    rec(arr,i+1,j-1);

}
void printRev(int arr[],int &n){
    
    // calling a recursive fun
    int i=0;
    int j=n-1;
    rec(arr,i,j);
}

int main(){
    int arr[]={1,4,3,2,6,8};
    int n=6;
    printRev(arr,n);

    for(auto i:arr){
        cout<<i<<" ";
    }
}