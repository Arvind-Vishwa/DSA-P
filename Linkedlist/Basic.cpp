#include<bits/stdc++.h>
using namespace std;


// Defining a Node class
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

// insert At head
Node* insertAtHead(int value,Node* &head,Node* &tail){
    // LL is empty
    if(head ==NULL && tail == NULL){
        // we have to create a Node
        Node* newNode=new Node(value);
        // head ko node pr lagado
        head=newNode;
        // tail ko bhi
        tail=newNode;
    }else{
        // LL is not empty
        // create a Node
        Node* newNode=new Node(value);
        newNode->next=head;
        head=newNode;
    }
    return head;

}

// insert at tail
Node* insertAtTail(int value,Node* &head,Node* &tail){
    // LL is empty
    if(head == NULL && tail == NULL){
        Node* newNode=new Node(value);
        head=newNode;
        tail=newNode;
    }else{
        Node* newNode=new Node(value);
        tail->next=newNode;
        tail=newNode;
    }
    return head;
}
void print(Node* head){
    Node* temp=head;

    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
// creating a Node
// stack
// Node first;

// Dynamic

// Node* first=new Node();

Node* head=NULL;
Node* tail=NULL;
head=insertAtTail(10,head,tail);
print(head);
head=insertAtTail(20,head,tail);
print(head);
head=insertAtTail(30,head,tail);
print(head);
head=insertAtTail(40,head,tail);
print(head);


}