#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int value){
        this->data=value;
        this->next=NULL;
    }
};

int main(){
// stack
Node first(10);
Node S(20);
Node T(30);

//Dynamic
// Node* first=new Node(20);
cout<<first.data<<" "<<first.next<<endl;
cout<<S.data<<" "<<S.next<<endl;
cout<<T.data<<" "<<T.next<<endl;

}