// find lcm of two number
#include<bits/stdc++.h>
using namespace std;

void findLCM(int a,int b){
    // formula
    // hcf*lcm=a*b

    vector<int>arr1;
    vector<int>arr2;
    
    
    for(int i=1;i<=a;i++){
        if(a%i == 0){
            arr1.push_back(i);
        }
    }
    
    for(int i=1;i<=b;i++){
        if(b%i == 0){
            arr2.push_back(i);
        }
    }

    int max_ans=INT_MIN;
    for(auto l:arr1){
        for(auto k:arr2){
            if(l == k){
                max_ans=max(max_ans,l);
            }
        }
    }
    cout<<"HCF :"<<max_ans<<endl;

    // by a formula
    int pro=a*b;
    int lcm=pro/max_ans;
    cout<<"LCM is "<<lcm;

}

int main(){
    int a=4;
    int b=8;
    findLCM(a,b);
}
