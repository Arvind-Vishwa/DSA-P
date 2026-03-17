// Fibonacci using num
#include<iostream>
using namespace std;

int Fib(int n){
    // base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    int num=Fib(n-1)+Fib(n-2);
    return num;
}

int main(){
    int n=5;

    cout<<Fib(n);
}