// double ll linkedlist 
// prev data next

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    Node* prev;
    int data;
    Node* next;

    Node(int val){
        this->data=val;
        this->prev=NULL;
        this->next=NULL;
    }
};

void insertAtHead(int val,Node* &head,Node* &tail){
    // LL is empty
    if(head ==NULL && tail == NULL){
        // create first Node
        Node* newNode=new Node(val);
        head=newNode;
        tail=newNode;
    }
    else{
        Node* newNode=new Node(val);
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
}

void print(Node* &head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* head=NULL;
    Node* tail=NULL;
    insertAtHead(10,head,tail);
    print(head);
    insertAtHead(20,head,tail);
    print(head);
    insertAtHead(30,head,tail);
    print(head);
    insertAtHead(40,head,tail);
    print(head);
}