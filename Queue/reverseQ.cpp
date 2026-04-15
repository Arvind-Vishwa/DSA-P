// reverse a queue
#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQ(queue<int>&q){
    // stack based
    stack<int>st;
    while(!q.empty()){
        int ele=q.front();
        q.pop();
        st.push(ele);
        
    }
    while(!st.empty()){
        int e=st.top();
        st.pop();
        q.push(e);
        
    }
}

void revrseQuRec(queue<int>&q){
    // base case
    if(q.empty()){
        return;
    }
    // 1 case hum solve
    int ele=q.front();
    q.pop();

    revrseQuRec(q);
    // backtracking
    q.push(ele);
}

int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    // reverseQ(q);
    revrseQuRec(q);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}