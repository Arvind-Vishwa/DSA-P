// finding maximum in a Array

#include<iostream>
#include<algorithm>
#include<math.h>
#include<limits.h>
using namespace std;

void maxArray(int arr[],int size,int index,int &maxi){
    // base case
    if(index == size){
        return ;
    }
    maxi = max(maxi,arr[index]);
    maxArray(arr,size,index+1,maxi);
}

int main(){
    int arr[] ={10,20,80,50,40};
    int size=5;
    int index=0;
    int maxi = INT_MIN;
    maxArray(arr,size,index,maxi);
    cout<<"Max no :"<<maxi;
}