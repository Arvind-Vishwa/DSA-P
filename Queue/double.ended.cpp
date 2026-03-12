// double ended
#include<iostream>
#include<queue>
using namespace std;

int main(){
    deque<int>dq;

    // deque  --> push and pop from both sides { rear and front }

    dq.push_front(10);
    dq.push_front(20);

    cout<<dq.front()<<endl;

    dq.push_back(30);
    dq.push_back(40);
    
    cout<<dq.back()<<endl;

    // pop from front
    dq.pop_front();

    // pop from back
    dq.pop_back();

    cout<<dq.size()<<endl;

    
}