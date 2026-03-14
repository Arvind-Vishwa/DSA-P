// deque circular nature
#include<iostream>
using namespace std;

class DeCircularQueue{
    public:
    int *arr;
    int n;
    int front;
    int rear;

    DeCircularQueue(int size){
        arr=new int[size];
        n=size;
        front=-1;
        rear=-1;
    }
    void pushFront(int val){
        // overflow,single element,circular nature,normal flow

        if(front == 0 && rear == n-1){
            cout<<"overflow"<<endl;
        }
        else if(front == -1 && rear == -1){
            front++;
            rear++;
            arr[front]=val;
        }
        else if(front == 0 && rear != n-1){
            // circular nature
            front=n-1;
            arr[front]=val;
        }else{
            front--;
            arr[front]=val;
        }
    }
    void pushBack(int val){
        // 4 cases:Overflow,first ELement, circular nature,normal flow

        if((front == 0 && rear == n-1) || (rear == front-1)){
            cout<<"Overflow"<< endl;
        }
        else if(front == -1 && rear == -1){
            rear++;
            front++;
            arr[rear]=val;
        }
        else if(rear == n-1 && front != 0){
//      Circular nature
            rear=0;
            arr[rear]=val;
        }else{
            rear++;
            arr[rear]=val;
        }
    }
    void popFront(){
        // 4 cases:Underflow,single elem,circular nature,normal flow
        if(front == -1 && rear == -1){
            cout<<"Underflow"<<endl;
        }
        else if(rear == front){
            // single element
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        else if(front == n-1){
            // circular nature
            arr[front]=-1;
            front=0;
        }
        else{
            arr[front]=-1;
            front++;
        }
    }
    void popBack(){
        // 4 cases:Underflow,single elem,circular nature,normal flow
        if(front == -1 && rear == -1){
            cout<<"Underflow"<<endl;
        }
        else if(rear == front){
            // single element
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        else if(rear == 0){
            // circular nature
            arr[rear]=0;
            rear=n-1;
        }else{
            arr[rear]=-1;
            rear--;
        }
    }
    void print(){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};

int main(){
    DeCircularQueue dq(5);
    dq.pushBack(10);
    dq.pushBack(20);
    dq.print();
    dq.pushFront(99);
    dq.print();
    dq.pushFront(21);
    dq.print();
    dq.popFront();
    dq.print();
    dq.popBack();
    dq.print();
}