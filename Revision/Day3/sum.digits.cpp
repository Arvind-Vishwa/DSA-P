// Sum of Digits
#include<bits/stdc++.h>
using namespace std;

void findSum(int n){
    int ans=0;
    while(n > 0){
        int no=n%10;
        ans=no+ans;
        n=n/10;
    }
    cout<<"sum of Digits :"<<ans<<endl;
}

int main(){
    int n=234545675;
    findSum(n);
}