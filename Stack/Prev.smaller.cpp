// Previous smaller 
#include<iostream>
#include<Stack>
#include<vector>
using namespace std;

void findPrevSmaller(int arr[],int n){
    stack<int>st;
    vector<int>ans(n,-1);

    for(int i=0;i<n;i++){

        while(!st.empty() && st.top() >= arr[i]){
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
    findPrevSmaller(arr,n);
}