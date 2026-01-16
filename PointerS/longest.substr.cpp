// Longest Substring with dustinct characters
#include<bits/stdc++.h>
using namespace std;

void findSub(string s){
    
    int ans=0;
    for(int i=0;i<s.size();i++){
        vector<bool>vis(26,false);

        for(int j=i;j<s.size();j++){

            // check curr char marked or not
            if(vis[s[j] -'a'] == true){
                break;
            }
            else{
                ans=max(ans,j-i+1);
                vis[s[j]-'a']=true;

            }
        }
    }
    cout<<"ans "<<ans;
}

int main(){
    string str="geeksforgeeks";
    findSub(str);
}