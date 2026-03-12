// deque implementation using array

#include<iostream>
using namespace std;

class Deque{
    private:
    int *arr;
    int n;
    int front;
    int rear;

    public:
    Deque(int size){
        this->n=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }

    void push_front(int val) {
        if (front == 0) { // No space left at the start
            cout << "Overflow" << endl;
            return;
        }
        if (front == -1) { // First element
            front = rear = 0;
        } else {
            front--;
        }
        arr[front] = val;
    }
    
    void push_back(int val) {
        if (rear == n - 1) { // No space left at the end
            cout << "Overflow" << endl;
            return;
        }
        if (front == -1) { // First element
            front = rear = 0;
        } else {
            rear++;
        }
        arr[rear] = val;
    }
     
    void pop_front(){
        // underfloe
        if(front == -1){
            cout<<"Underflow"<<endl;
            return;
        }
        // single element
        else if(front == rear){
            front=-1;
            rear=-1;
        }else{
            arr[front]=-1;
            front++;
        }
        
    }
    void pop_back(){
        if(rear == -1){
            cout<<"Underflow"<<endl;
            return;
        }
        else if(rear == front){
            rear=-1;
            front=-1;

        }
        else{
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
    Deque dq(5);
    
    dq.push_front(99);
    dq.push_back(20);
    dq.push_back(30);
    dq.print();
    dq.push_back(10);
    dq.print();
    dq.pop_front();
    dq.print();
    return 0;
}