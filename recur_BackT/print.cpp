// print 1 to n without using loop
#include<iostream>
using namespace std;

void printN(int n){
    // base case
    if(n==0){
        return;
    }

    printN(n-1);    // calling the function
    cout<<n<<" ";

}

int main(){
    int n=10;
    printN(n);
}