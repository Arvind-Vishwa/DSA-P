// interleave the first half of the queue with second half
#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;

void findInterleave(queue<int>q){
    int n=q.size();
    stack<int>st;
    
    for(int i=0;i<n/2;i++){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    for(int i=0;i<n/2;i++){
        q.push(q.front());
        q.pop();
    }
    for(int i=0;i<n/2;i++){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        q.push(q.front());
        st.pop();
        q.pop();
    }
    
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    
}

int main(){
    queue<int>q;
    q.push(2);
    q.push(4);
    q.push(3);
    q.push(1);
    findInterleave(q);
}