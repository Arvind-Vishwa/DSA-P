// fibonacci using recursion
#include<iostream>
using namespace std;

int printFibo(int n){
    if(n==0){
        return 0;
    }
    if(n ==1){
        return 1;
    }
    
    int sum=printFibo(n-1)+printFibo(n-2);
    // cout<<sum<<" ";  
    return sum;
}

int main(){
    int n=8;
    // int ans=printFibo(n);
    // cout<<ans;    this return nth num directly

    // print all
    for(int i=0;i<n;i++){
        cout<<printFibo(i)<<" ";
    }
}