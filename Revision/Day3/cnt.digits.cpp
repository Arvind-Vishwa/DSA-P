// count of digits of Number
#include<iostream>
using namespace std;

void countDigit(int num){
    int cnt=0;

    while(num > 0){
        cnt++;
        num=num/10;
    }
    cout<<"ans :"<<cnt;
}

int main(){
    int num=123432;
    countDigit(num);
}