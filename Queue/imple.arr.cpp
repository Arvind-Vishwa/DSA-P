// implementation of Queue using array
#include<iostream>
using namespace std;

class Queue{
    private:
    int *arr;
    int n;
    int front;
    int rear;

    public:
    Queue(int size){
        arr=new int[size];
        n=size;
        front = -1;
        rear = -1;
    }

    void push(int val){
        // rear mein push hota h
        
        // 1.overflow
        if(rear == n-1){
            cout<<"queue is full"<<endl;
        }
        // 2. first element
        else if(rear == -1 && front == -1){
            // special
            rear++;
            front++;
            arr[rear]=val;
        }
        // 3. normal push
        else{
            rear++;
            arr[rear]=val;
        }
    }
    void pop(){
        // pop front se hota h
        if(rear == -1 && front == -1){
            cout<<"Underflow"<<endl;
        }else if(rear == front){
            // single element
            arr[rear]=-1;
            rear=-1;
            front=-1;
        }else{
            arr[front]=-1;
            front++;
        }
    }
    int getFront(){
        if(front == -1){
            return 0;
        }
        return arr[front];
    }
    int getRear(){
        if(rear == -1){
            return 0;
        }
        return arr[rear];
    }
    int getSize(){
        return rear-front+1;
    }
    bool isEmpty(){
        if(rear == -1 && front == -1){
            return true;
        }else{
            return false;
        }
    }
};

int main(){
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);

    cout<<q.getFront()<<endl;
    cout<<q.getRear()<<endl;

    cout<<q.getSize()<<endl;
    q.pop();
    cout<<q.getFront()<<endl;

    
}