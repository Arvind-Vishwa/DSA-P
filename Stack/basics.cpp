#include<iostream>
#include<stack>
using namespace std;


int main(){
    stack<int>s;

    s.push(10);
    s.push(20);
    s.push(30);

    // size
    cout<<s.size()<<endl;
    // peek
    cout<<s.top()<<endl;
    // check empty
    cout<<s.empty()<<endl;
    // pop-->remove the top
    s.pop();
    cout<<"top :"<<s.top()<<endl;
}