// min sum game

#include<bits/stdc++.h>
using namespace std;

int digitSum(int n){
    int sum=0;
    while(n > 0){
        sum=n%10+sum;
        n=n/10;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter the size of num"<<endl;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the no :"<<" "<<i+1<<endl;
        cin>>arr[i];
    }
    int min_digit=INT_MAX;
    for(int i=0;i<n;i++){
        int sum=digitSum(arr[i]);
        min_digit=min(sum,min_digit);
    }
    cout<<"ans :"<<min_digit<<endl;
}