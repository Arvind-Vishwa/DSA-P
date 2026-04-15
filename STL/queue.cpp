// Queue { front --> used for remove  & Rear -->used for adding

#include<iostream>
#include<queue>
using namespace std;
int main(){
// creation
    queue<int>q;
    // insertion

    if(q.empty() == true){
        cout<<"Queue is empty "<<endl;
    }
    else
    cout<<"Queue is not empty "<<endl;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout<<"size: "<<q.size()<<endl;

    q.pop();
    cout<<"front :"<<q.front()<<endl;
    cout<<"back :"<<q.back()<<endl;




    return 0;
}