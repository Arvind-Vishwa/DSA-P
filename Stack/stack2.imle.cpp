//stack 2 implementation
#include<iostream>
#include<stack>
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
    void push1(int val){
        // if space available , then push
        // else stack overflow karjayega

        if(top2-top1 == 1){
            // cannot insert
            cout<<"stack Overflow"<<endl;
        }else{
            top1++;
            arr[top1]=val;
        }
    }
    void push2(int val){
        if(top2-top1 == 1){
            cout<<"stack overflow"<<endl;
        }else{
            top2--;
            arr[top2]=val;
        }
    }
    void pop1(){
        if(top1 == -1){
            cout<<"stack underflow"<<endl;
        }else{
            arr[top1]=0;
            top1--;
        }
        
    }
    void pop2(){
        if(top2 == size){
            cout<<"stack underflow"<<endl;
        }else{
            arr[top2]=0;
            top2--;
        }
    }
    void print(){
        cout<<"Top1-->" <<top1<<endl;
        cout<<"Top2-->"<<top2<<endl;

        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }

};
int main(){
Stack s1(8);
s1.push1(10);
s1.push1(20);
s1.push1(30);
s1.push1(40);
s1.push2(50);
s1.push2(60);
s1.push2(70);
s1.print();
}