// Reverse a Number
#include<bits/stdc++.h>
using namespace std;

void reverseNo(int num){
    
    int ans=0;
    while(num > 0){
        int no=num%10;
        ans=ans*10+no;
        num=num/10;
    }
    cout<<"ans "<<ans;
}

int main(){
    int num=34256;
    reverseNo(num);
}