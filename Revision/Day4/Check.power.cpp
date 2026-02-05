// Check if number is power of two
#include<bits/stdc++.h>
using namespace std;

bool checkPower(int n){

    while(n > 1){
        if(n%2 != 0)
        return false;
        n=n/2;
    }
    return true;
}

int main(){
    int n=18;
    bool ans=checkPower(n);
    if(ans == true){
        cout<<"Yes, it is divisible"<<endl;
    }else{
        cout<<"it is not divisible"<<endl;
    }
}