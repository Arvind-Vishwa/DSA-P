// Deque --> Double ended queue
// efficient for insertion and removal frequently

#include<iostream>
#include<queue>
using namespace std;
int main(){
    // creation
    deque<int>dq;

    //insertion
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);

    dq.push_front(100);
    cout<<"Size :"<<dq.size()<<endl;

    cout<<dq.front()<<endl;
    dq.pop_back();
    dq.pop_front();

    deque<int>::iterator it=dq.begin();
    while(it != dq.end()){
        cout<<*it<<" ";
        it++;
    }
    

    return 0;
}