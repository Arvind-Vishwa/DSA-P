// Double LL insert at tail
#include<iostream>
using namespace std;

class Node{
    public:
    Node* prev;
    int data;
    Node* next;

    Node(int val){
        prev=NULL;
        next=NULL;
        data=val;
    }
};

void insertAtTail(int val,Node* &head,Node* &tail){
    // LL is empty
    if(head == NULL && tail == NULL){
        // create first NOde
        Node* newNode=new Node(val);
        head=newNode;
        tail=newNode;
    }else{
        Node* newNode=new Node(val);
        newNode->prev=tail;
        tail->next=newNode;
        tail=newNode;
    }
}
void print(Node* &head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

int main(){
    Node* head=NULL;
    Node* tail=NULL;

    insertAtTail(10,head,tail);
    print(head);
    insertAtTail(20,head,tail);
    print(head);
    insertAtTail(30,head,tail);
    print(head);
    insertAtTail(40,head,tail);
    print(head);
}