// check number is palindrome
#include<bits/stdc++.h>
using namespace std;

void checkPali(int num){
    int ans=0;
    int temp=num;
    while(num > 0){
        int no=num%10;
        ans=(ans*10)+no;
        cout<<"ans "<<ans<<endl;        
        num=num/10;
    }
    
    if(temp == ans){
        cout<<"Number is Palidrome"<<endl;
    }else
    cout<<"Number is not pali"<<endl;
}

int main(){
    int num=535;
    checkPali(num);
}