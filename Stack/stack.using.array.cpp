//stack implementation using array
#include<iostream>
using namespace std;
class Stack{
    public:

    int *arr;
    int top;
    int size;

    Stack(int capacity){
        arr=new int[capacity];
        size=capacity;
        top=-1;

    }

    void push(int val){
        if(top == size-1){
            cout<<"stack overflow"<<endl;
        }
        else{
            top++;
        arr[top]=val;
        }
    }
    void pop(){
        if(top == -1){
            cout<<"stack underflow"<<endl;
        }else{
            arr[top]=-1;
            top--;
        }
    }
    int getSize(){
        return top+1;
    }
    int getTop(){
        if(top == -1){
            cout<<"There is no element at the top,as stack is empty"<<endl;
            return -1;
        }else
        return arr[top];
    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }

    void print(){
        for(int i=0;i<size-1;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};

int main(){
    Stack s1(5);

    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);

    s1.print();
    cout<<s1.getTop()<<endl;
    cout<<s1.getSize()<<endl;
    cout<<s1.isEmpty()<<endl;
    

}