// substring with k distinct
#include<bits/stdc++.h>
using namespace std;

void findDist(string s,int k){
    int cnt=0;
    for(int i=0;i<s.size();i++){
        unordered_set<char>myset;
        for(int j=i;j<s.size();j++){
            myset.insert(s[j]);
            if(myset.size() == k){
                cnt++;
            }
        }
    }
    cout<<"ans :"<<cnt;
}

int main(){
    string s="aa";
    int k=1;
    findDist(s,k);
}