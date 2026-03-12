#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>q;

    // insertion
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    // front
    cout<<"front: "<<q.front()<<endl;  // 10

    // pop
    q.pop();   // 10

    // size
    cout<<"size: "<<q.size()<<endl;

    return 0;

}