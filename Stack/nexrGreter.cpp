// next smaller element
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void solve(stack<int>&s,vector<int>v){
    vector<int>ans;
    int n=v.size();
    for(int i=n-1;i>=0;i--){
        int element=v[i];
        //har element k liye stack check karne jaa
        
        while(s.top() >= element){
            s.pop();
        }
        // jab main yha pahunchaga, iska mtlb
        // k apke stack top pr pkka koi chotta element
        // pada hua h
        ans.push_back(s.top());
        s.push(element);
        

    }
    for(int i=ans.size()-1;i>=0;i--){
            cout<<ans[i]<<" ";
        }

    
}

void prevSmaller(stack<int>&s,vector<int>v){
    vector<int>ans;
    // fark sirf  loop wale k h
    for(int i=0;i<v.size();i++){
        int element =v[i];
        while(s.top() > element){
            s.pop();
        }
        // yaha agye toh stack ke top pr chhota element h
        ans.push_back(s.top());
        s.push(v[i]);
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
}

int main(){
    vector<int>v;
    v.push_back(8);
    v.push_back(4);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);

    stack<int>s;
    s.push(-1);
    // solve(s,v);
    prevSmaller(s,v);

}

