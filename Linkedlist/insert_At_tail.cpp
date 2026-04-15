// insert at tail
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next=NULL;

    Node(int val){
        this->data=val;
        this->next=NULL;
    }
};

Node* insertAtTail(int val,Node* head,Node* tail){
    // LL is empty 
    if(head == NULL && tail == NULL){
        Node* newNode =new Node(val);
        head=newNode;
        tail=newNode;
    }
    // LL is not empty
    else{
        Node* newNode=new Node(val);
        tail=newNode;
        head=newNode->next;
    }
    return tail;
}
void print(Node* tail){
    Node* temp=tail;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp ->next;
    }
}
int getLength(Node *head){
    int len=0;
    Node* temp=head;
    while(temp != NULL){
        temp =temp ->next;
        len++;
    }
    return len;
}

// insert At any Position
    void insertAtPosition(int pos,int val,Node* &head,Node* &tail){
        int length=getLength(head);
        if(pos == 1){
            // head=insertAtHead(val,head,tail);
        }
        else if(length+1==pos ){
            tail=insertAtTail(val,head,tail);
        }
        else{
            // kahin bhi insert karna h
            Node* temp=head;
            for(int i=0;i<pos-2;i++){
                temp=temp->next;
            }
            Node* newNode=new Node(val);
            
            newNode->next=temp->next;
            temp->next=newNode;
        }
    }

int main(){
    Node* head=NULL;
    Node* tail=NULL;
    tail=insertAtTail(10,head,tail);
    // print(tail);
    tail=insertAtTail(20,head,tail);
    // print(tail);
    tail=insertAtTail(30,head,tail);
    // print(tail);
    tail=insertAtTail(40,head,tail);
    // print(tail);
    insertAtPosition(2,54,head,tail);
    print(tail);
    
}


