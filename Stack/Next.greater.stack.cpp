// Next greater element using Stack
#include<iostream>
#include<Stack>
#include<vector>
using namespace std;

void findNext(int arr[],int n){
    stack<int>st;
    vector<int>ans(n,-1);

    for(int i=n-1;i>=0;i--){

        if(!st.empty() && arr[i] >= st.top()){
            st.pop();
        }

        // after top elemnt is ans
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
    findNext(arr,n);
}