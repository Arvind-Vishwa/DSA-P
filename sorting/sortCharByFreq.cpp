// sort char by freq
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

bool comp(pair<char,int>a,pair<char,int>b){
    return a.second < b.second;
}

void sortByFreq(string s){
    map<char,int>mp;
    int n=s.size();
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }

    // fetching from map
    vector<pair<char,int>>v;
    for(auto &x:mp){
        char ch=x.first;
        int freq=x.second;

        v.push_back({ch,freq});
    }

    sort(v.begin(),v.end(),comp);
    // reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        int freq=v[i].second;
        
        char ch=v[i].first;
        while(freq--)
        cout<<ch<<" ";
    }

}

int main(){
    string s="treest";
    sortByFreq(s);
}