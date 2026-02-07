// print sum of fibonacci
#include<iostream>
using namespace std;

void printSum(int arr[],int num){
    arr[1]=1;
    int sum=1;
    for(int i=2;i<num;i++){
        int no=arr[i-1]+arr[i-1];
        arr[i]=no;
        // cout<<"no "<<no<<endl;
        sum +=arr[i];
        // cout<<"sum curr :"<<sum<<endl;

    }

    cout<<"sum is :"<<sum;
}

int main(){
    int num;
    cout<<"Enter the size of fibo to get sum"<<endl;
    cin>>num;
    int arr[]={0};
    printSum(arr,num);
}