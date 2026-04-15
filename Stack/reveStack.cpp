// reverse a stack
// take two stack and push ele1 to next stack
// recursion

// taking tow stack
#include<iostream>
#include<stack>
using namespace std;

// void revStack(stack<int>&s1,stack<int>&s2){
//     int ele=0;
    
//     while(!s1.empty()){
//         ele=s1.top();
//         cout<<ele<<" ";
//         s1.pop();
//         s2.push(ele);
//     }cout<<endl;
    
//     while(!s2.empty()){
//         cout<<s2.top()<<" ";
//         s2.pop();
//     }
// }

void insertAtBottom(stack<int>&s,int ele){
    // base case
    if(s.empty()){
        s.push(ele);
        return;
    }

    int st=s.top();
    s.pop();

    insertAtBottom(s,ele);
    // backtrack
    s.push(st);
}
void revStack(stack<int>&s1){
    // using recursion
    // base case
    if(s1.empty()){
        return;
    }
    // 1 case 
    int ele=s1.top();
    s1.pop();

    revStack(s1);
    // backtrack
    insertAtBottom(s1,ele);
}


int main(){
    stack<int>s1;
    stack<int>s2;
    
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);

    
    // revStack(s1,s2);
    revStack(s1);

    while(!s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }cout<<endl;
}