// Print prime No from 1 to N
#include<iostream>
using namespace std;

void printPrime(int n){
    // brute force
    int arr[n]={0};
    
    for(int i=1;i<=n;i++){
        int cnt=0;
        for(int j=1;j<=n;j++){
            if(i%j == 0){
                cnt++;
            }
        }
        if(cnt == 2){
            arr[i-1]=i;
        }
    }

    for(auto k:arr){
        cout<<k<<" ";
    }
}

int main(){
    int n=10;
    printPrime(n);
}