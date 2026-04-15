// double ended queue
#include<iostream>
#include<queue>
using namespace std;


int main(){
    deque<int>dq;
    // front --> push and pop
    // rear --> push and pop

    //insertion
    dq.push_front(10);
    // 10
    dq.push_front(20);
    // 10 20
    dq.push_front(30);
    // 10 20 30
    dq.push_back(40);
    // 40 10 20 30

    cout<<dq.size()<<endl;
    cout<<dq.empty()<<endl;

    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;

    // removal
    dq.pop_front();  // 30 pop
    dq.pop_back();  // 40 pop
}