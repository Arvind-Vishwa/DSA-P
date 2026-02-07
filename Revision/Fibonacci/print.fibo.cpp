// print fibonacci upto n terms
#include<iostream>
using namespace std;

void printFibo(int n){
    int arr[n]={0};

    arr[0]=0;
    arr[1]=1;
    int sum=0;
    for(int i=2;i<=n;i++){
        sum=arr[i-1]+arr[i-2];
        arr[i]=sum;
        cout<<sum<<" ";
    }
    cout<<endl;
    cout<<n<<"th :"<<sum;
    
}

int main(){
    int n=10;
    printFibo(n);
}