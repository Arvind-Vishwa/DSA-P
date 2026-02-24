// Next smaller element
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void findNextSmaller(int arr[],int n){
    vector<int>ans(n,-1);
    stack<int>st;

    for(int i=n-1;i>=0;i--){

        while(!st.empty() && arr[i] <= st.top()){
            st.pop();
        }
        if(!st.empty()){
            ans[i]=st.top();
        }
        st.push(arr[i]);
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
}

int main(){
    int arr[]={1,3,2,4};
    int n=4;
    findNextSmaller(arr,n);
}