// The give no is prime or not
#include<bits/stdc++.h>
using namespace std;

void findNum(int num){
    // taking the range
    int cnt=0;
    for(int i=1;i<=num;i++){
        if(num%i == 0){
            cnt++;
        }
        
    }
    if(cnt == 2){
        cout<<"Num is Prime"<<endl;
    }else{
        cout<<"No is not Prime"<<endl;
    }
}

int main(){
    int num=7;
    findNum(num);
}