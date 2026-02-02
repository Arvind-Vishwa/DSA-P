// find min np of coins
#include<bits/stdc++.h>
using namespace std;

bool compare(int a,int b){
    // swap(a,b);
    return a > b;
}

void findMin(vector<int>coin,int n,int amt){
    // sort coin in decrasing order
    int res=0;
    
    sort(coin.begin(),coin.end(),compare);

    for(int i=0;i<n;i++){
        if(coin[i] <= amt){
            int c=floor(amt/coin[i]);
            res =res+c;
            amt=amt-c * coin[i];
        }
        if(amt == 0) break;
    }

    cout<<"ans :"<<res;
}

int main(){
    vector<int>coin={1,2,5,10};
    int n=4;
    int amt=121;
    findMin(coin,n,amt);
}