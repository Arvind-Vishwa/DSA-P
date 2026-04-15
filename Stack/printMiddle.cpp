// print middle of stack
#include<iostream>
#include<stack>
using namespace std;

void printMiddle(stack<int>&s,int siz){
    
    if(siz == 0){
        cout<<"middle element :"<<s.top()<<endl;
        return;
    }

    // using recursion and backtracking

    // 1 case main solve karunga
    int topEle=s.top();
    s.pop();
    siz--;

    printMiddle(s,siz);

    //backtrack
    s.push(topEle);


}

int main(){

    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    // s.push(60);
    int siz=s.size()/2;
    
    printMiddle(s,siz);
}