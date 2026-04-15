// circualr dequeue
#include<iostream>
using namespace std;

class CircularDq{
    private:
    int *arr;
    int n;
    int front;
    int rear;
    public:
    // constructor
    CircularDq(int size){
        arr=new int[size];
        this->n=size;
        this->front=-1;
        this->rear=-1;
    }
    void pushFront(int val){
        // 4 case  overflow, single element, circular nature and normal form
        if((front ==0 && rear ==n-1) || (rear == front -1)){
            cout<<"Overflow"<<endl;
        }
        else if(front==-1 && rear ==-1){
            front++;
            rear++;
            arr[rear]=val;
        }
        else if(front == 0 && rear != n-1){
            // circular nature
            front=n-1;
            arr[front]=val;
        }
        else{
            // normal case
            front--;
            arr[front]=val;
        }
    }
    void pushBack(int val){
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
    void popFront(){
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
    void popBack(){
        if(front == -1 && rear == -1){
            cout<<"Underflow"<<endl;
        }
        else if(front == rear){
            // single element
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        else if(rear == 0){
            // circular 
            arr[rear]=-1;
            rear=n-1;
        }
        else{
            arr[rear]=-1;
            rear--;
        }
    }


};

int main(){
    CircularDq cq(5);
    
}