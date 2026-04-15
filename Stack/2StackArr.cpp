// two stack implementaion in array
#include<iostream>
using namespace std;

class Stack{
    public:
        int *arr;
        int size;
        int top1;
        int top2;

    // constructor
    Stack(int capacity){
        arr=new int[capacity];
        size=capacity;
        top1=-1;
        top2=size;
    }

    // function 
    void pushTop1(int val){
        
        if(top2-top1 == 1){
            cout<<"stack overflow"<<endl;
        }
        else{
            top1++;
            arr[top1]=val;
        }
    }

    void pushTop2(int val){
        if(top2-top1 == 1){
            cout<<"stack overflow"<<endl;
        }
        else{
            top2--;
            arr[top2]=val;
        }
    }

    void pop1(){
        if(top1 == -1){
            cout<<"stack underflow"<<endl;
        }
        else{
        arr[top1]=0;
        top1--;
        }
    }

    void pop2(){
        if(top2 == size){
            cout<<"stack underflow"<<endl;
        }
        else{
            arr[top2]=0;
            top2++;
        }
    }

    void print(){
        cout<<"printing"<<endl;
        cout<<arr[top1]<<endl;
        cout<<arr[top2]<<endl;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
};

int main(){
    Stack s(4);
    s.pushTop1(10);
    s.pushTop1(20);
    s.pushTop2(30);
    s.pushTop2(40);
    s.pushTop2(50);
    s.print();
    s.pop1();
    s.pop2();
    s.print();
    return 0;
}