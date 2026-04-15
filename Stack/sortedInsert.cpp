// sorted and insert in stack
#include<iostream>
#include<stack>
using namespace std;

void sortInsert(stack<int>&s,int val){
    // base case
    if(val >= s.top() && !s.empty()){
        s.push(val);
        return;
    }

    int topE=s.top();
    s.pop();
    sortInsert(s,val);
    s.push(topE);
}

int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int val=23;
    sortInsert(s,val);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}