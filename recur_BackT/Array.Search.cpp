// Array Search 
#include<iostream>
using namespace std;

int recuSearch(int arr[],int n,int x,int i){
    // base case
    if(i== n){
        return -1;
    }
    if(arr[i] == x){
        return i;
    }

    return recuSearch(arr,n,x,i+1);
}

int findEle(int arr[],int n,int x){
    
    return recuSearch(arr,n,x,0);
}

int main(){
    int arr[]={4,6,2,10,20};
    int x=10;
    int n=5;
    int ans=findEle(arr,n,x);
    if(ans == -1){
        cout<<"Not found!"<<endl;
    }else{
        cout<<"Element found"<<endl;
    }
}