// circular queue
#include<iostream>
using namespace std;


class CirculaQueue{
    private:
    int *arr;
    int n;
    int front;
    int rear;
    public:
    // constructor
    CirculaQueue(int size){
        arr=new int[size];
        this->n=size;
        this->front=-1;
        this->rear=-1;
    }
    void push(int val){
        // 4 case --> Overflow,first elemnt, circular nature,normal flow
        if(front == 0 && rear == n-1 || (rear ==front-1)){
            cout<<"Overflow"<<endl;
        }
        else if(front==-1 && rear ==-1){
            front++;
            rear++;
            arr[rear]=val;
        }
        else if(rear == n-1 && front!= 0){
            // circular nature
            rear=0;
            arr[rear]=val;
        }
        else{
            // normal flow
            rear++;
            arr[rear]=val;
        }
    }
    void pop(){
        // 4 cases --> underflow,single element, circular nature,normal flow
        if(front == -1 && rear == -1){
            cout<<"Underflow"<<endl;
        }
        else if(front == rear){
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
            // normal case
            arr[front]=-1;
            front++;
        }
    }
    int getFront(){
        if(front == -1){
            cout<<"Queue is empty"<<endl;
        }
        return arr[front];
    }
    int getSize(){
        if(front == -1 && rear == -1){
            return 0;
        }
        else if(rear == front)return 1;
        else
        return n-front+rear+1;
    }
    bool isEmpty(){
        if(front == -1 && rear == -1)
        return true;

        else
        return false;
    }
    void print(){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }

};

int main(){
    CirculaQueue cq(5);

}