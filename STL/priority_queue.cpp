// it is queue where priority matter 

#include<iostream>
#include<queue>
using namespace std;
int main(){
    // creation
    priority_queue<int>pq;
    // max-heap --> maximum value --> Highest Priority
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(23);

    cout<<"Highest priority: "<<pq.top()<<endl;

    pq.pop();
    // highest priority element get pop --> 30
    cout<<"Priority :"<<pq.top()<<endl;



    return 0;
}