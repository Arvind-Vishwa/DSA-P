#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top;

    Stack(int capacity){
        arr=new int[capacity];
        this->size=capacity;
        top=-1;
    }

    //methods
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
        }
        else{
        arr[top]=-1;
        top--;
        }
        
    }

    int getSize(){
        return top+1;
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else return false;
    }

    int getTop(){
        if(top == -1){
            cout<<"its not a valid index"<<endl;
        }
        else return arr[top];
    }
    void print(){
    cout<<"Printing"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";

    }
}
};




int main(){
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    int ans = s.getTop();
    cout<<ans<<endl;
    s.print();
    s.pop();
    s.pop();
    s.print();
    int a = s.getTop();
    cout<<a<<endl;
    return 0;
}