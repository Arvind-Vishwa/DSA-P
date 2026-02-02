#include<bits/stdc++.h>
using namespace std;

void findPrime(int n){
    // brute
    // jo no khud se ya 1 divide hota h prime
    vector<int>ans;
    for(int i=1;i<=n;i++){
        int cnt=0;
        for(int j=1;j<=n;j++){
            if(i%j == 0){
                cnt++;
            }
        }
        if(cnt == 2){
            ans.push_back(i);
        }

    }

    for(auto k:ans){
        cout<<k<<" ";
    }
}

int main(){
    int n=20;
    findPrime(n);
}