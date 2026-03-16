// QUEUE REVERSING
#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void printRev(queue<int>q){
    int n=q.size();
    stack<int>st;
    for(int i=0;i<n-1;i++){
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}

int main(){
    queue<int>q;
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);
    q.push(25);
    printRev(q);
}