// 4 sum 
// ans should be interanlly sorted
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>findSum(vector<int>arr,int target){
    // used better approach for this set
    int n=arr.size();
    set<vector<int>>res;
    // step 1 --> fixing the two elemnet and find the fourth one by using third
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){

            unordered_set<int>s;
            for(int k=j+1;k<n;k++){
                int sum=arr[i]+arr[j]+arr[k];
                int last=target-sum;

                if(s.find(last) != s.end()){
                    // fourth element mil gya h
                    vector<int>curr={arr[i],arr[j],arr[k],last};
                    // for internally sort
                    sort(curr.begin(),curr.end());
                    res.insert(curr);
                }
                s.insert(arr[k]);
            }
        }
    }
    vector<vector<int>>ans;
    for(auto &it:res){
        ans.push_back(it);
    }
    return ans;
}

int main(){
    vector<int>arr={10,2,3,4,5,7,8};
    int target=23;
    vector<vector<int>>ans=findSum(arr,target);

    for(auto &it:ans){
        cout<<it[0]<<" "<<it[1]<<" "<<it[2]<<" "<<it[3]<<endl;
    }
}