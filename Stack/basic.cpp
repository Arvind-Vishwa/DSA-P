// stack is data structure it uses a LIFO or FILO
// we can also used a stl function of stack
// pop() push() top() other also
#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    //iteration
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
}