// sum of natural num
#include<iostream>
using namespace std;

int findSum(int n){
    // base case
    if(n==0){
        return 0;
    }
    int sum=findSum(n-1);
    return n+sum;
}

int main(){
    int n=4;
    cout<<findSum(n);
}