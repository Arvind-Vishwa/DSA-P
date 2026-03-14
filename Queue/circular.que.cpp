// circular queue
#include<iostream>
using namespace std;

class CircularQueue{
    public:
    int *arr;
    int n;
    int front;
    int rear;

    CircularQueue(int size){
        arr=new int[size];
        n=size;
        front=-1;
        rear=-1;
    }

    void push(int val){
        

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

    void pop(){
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

    int getSize(){
        if(front == -1 && rear == -1)
        return 0;

        else if(rear > front){
            return rear-front+1;
        }
        else if(rear < front){
            return n-front+rear+1;
        }
        else{
            return 1;
        }
        
    }
    int getFront(){
        if(front != -1){
            return arr[front];
        }
        return -1;
    }
    int getRear(){
        if(rear != -1){
            return arr[rear];
        }
        return -1;
    }
};

    


int main(){
    CircularQueue cq(5);
    cq.push(10);
    cq.push(20);
    cq.push(30);
    cout<<cq.getFront()<<endl;
    cout<<cq.getRear()<<endl;
}