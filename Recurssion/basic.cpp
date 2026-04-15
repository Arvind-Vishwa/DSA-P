// Recurssion ---> calls itself 

// factorial
#include<iostream>
using namespace std;

int fibonacciSeries(int n){
    if(n==1){
        return 1;
    }
    if(n==0){
        return 0;
    }
    int fibonaSeries = fibonacciSeries(n-1)+fibonacciSeries(n-2);
    return fibonaSeries;
}

void reverseCounting(int n){
    if(n==0){
        return;
    }

    cout<<n<<" ";
    reverseCounting(n-1);
}

void getCounting(int n){
    // BAse case
    if(n==0){
        return ;
    }
    getCounting(n-1);
    cout<<n<<" ";
}

int getFactorial(int n){
    // base case
    if(n==0 || n==1){
        return 1;
    }

    int finalAns = n * getFactorial(n-1);
    return finalAns;
}
int main(){
int n=7;
for(int i=0;i<n;i++){
    cout<<fibonacciSeries(i)<<" ";
}


// reverseCounting(n);
// getCounting(n);
// int ans =getFactorial(n);
// cout<<"Factorial is :"<<ans<<endl;
}