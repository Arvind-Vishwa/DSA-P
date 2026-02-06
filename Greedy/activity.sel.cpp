// Activity selection
#include<bits/stdc++.h>
using namespace std;

bool comp(const auto&a,const auto&b){
    return b.second > a.second;
}

void findActivity(vector<int>&start,vector<int>&finish){
    vector<pair<int,int>>temp;
    int s=start.size();
    for(int i=0;i<s;i++){
        temp.push_back({start[i],finish[i]});
    }

    sort(temp.begin(),temp.end(),[](auto&a,auto&b){
        return a.second < b.second;
    });
    int n=temp.size();
    int curr_time=temp[0].second;
    int cnt=1;
    for(int i=1;i<n;i++){
        if(temp[i].first > curr_time){
            cnt++;
            curr_time=temp[i].second;
        }
        
    }

    cout<<"ans :"<<cnt;
}

int main(){
    vector<int>start={1,3,0,5,8,5};
    vector<int>finish={2,4,6,7,9,9};
    findActivity(start,finish);
}