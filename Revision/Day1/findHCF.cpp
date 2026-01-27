// Find HCF/GCD
#include<bits/stdc++.h>
using namespace std;

void findHCF(int a,int b){
    // small no
    // finding the factor of all a and b

    vector<int>arr1;
    vector<int>arr2;

    for(int i=1;i<=a;i++){
        if(a%i == 0){
            arr1.push_back(i);
        }
    }

    for(int i=1;i<=a;i++){
        if(b%i == 0){
            arr2.push_back(i);
        }
    }
    int ans=1;
    int max_ans=INT_MIN;
    
    for(auto k:arr1){
        if(arr1[k] == arr2[k]){
            ans = arr1[k];
        }
        max_ans=max(max_ans,ans);
    }
    cout<<max_ans<<" ";
}

int main(){
    int a=8;
    int b=4;
    findHCF(a,b);
}