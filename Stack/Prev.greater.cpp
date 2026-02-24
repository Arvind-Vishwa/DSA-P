// Previous greater element
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void findPrevGreat(int arr[],int n){
    stack<int>st;
    vector<int>ans(n,-1);

    for(int i=0;i<n;i++){

        while(!st.empty() && arr[i] >= st.top()){
            st.pop();
        }
        if(!st.empty()){
            ans[i]=st.top();
        }
        st.push(arr[i]);
    }

    for(auto i :ans){
        cout<<i<<" ";
    }
}

int main(){
    int arr[]={1,3,2,4};
    int n=4;
    findPrevGreat(arr,n);
}