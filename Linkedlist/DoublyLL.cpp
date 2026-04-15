// Double linked list
#include<iostream>
using namespace std;

class Node{
    public:
    Node* prev;
    int data;
    Node* next;

    // constructor
    Node(int val){
        this->data=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

// insertion
void insertAtHead(int val,Node* &head,Node* &tail){
    // LL is empty
    if(head == NULL && tail == NULL){
        Node* newNode = new Node(val);
        head=newNode;
        tail=newNode;
    }
    else{
        Node* newNode =new Node(val);
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
}

void insertAtTail(int val,Node* &head,Node* &tail){
    // LL is empty
    if(head == NULL && tail == NULL){
        Node* newNode=new Node(val);
        head=newNode;
        tail=newNode;
    }
    else{
        Node* newNode=new Node(val);
        newNode->prev=tail;
        tail->next=newNode;
        tail=newNode;
    }
}

int getLength(Node* &head){
    Node* temp=head;
    int count=0;
    while(temp != NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

void insertAtPos(int pos,int val, Node* &head,Node* &tail){
    int len=getLength(head);
    // if pos =1 insertAtHead
    if(pos == 1)
    insertAtHead(val,head,tail);

    else if(pos == len+1)
    insertAtTail(val,head,tail);

    else{
        Node* newNode=new Node(val);
        Node* temp=head;
        for(int i=0;i<pos-2;i++){
            temp=temp->next;
        }
        Node* forward=temp->next;
        temp->next=newNode;
        newNode->prev=temp;
        forward->prev=newNode;
        newNode->next=forward;


    }

}

void print(Node* head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void printReverse(Node* tail){
    while(tail != NULL){
        cout<<tail->data<<" ";
        tail=tail->prev;
    }
}

// searching
bool searchInLL(Node* &head,int target){
    Node* temp=head;
    while(temp != NULL){
        if(target == temp->data){
            return true;
        }
        temp =temp->next;
    }
    return false;
}

 // deletion of head Node || ! head
void deleteFromPos(int pos,Node* &head,Node* &tail){
    int len=getLength(head);
    // LL is empty
    if(head ==NULL && tail == NULL){
        cout<<"No nodes to delete "<<endl;
    }

    else if(head == tail){
        Node* temp=head;
        head=NULL;
        tail=NULL;
        delete temp;
    }
    else{
        if(pos == 1){
            Node* temp=head;
            head=head->next;
            head->prev=NULL;
            temp->next=NULL;
            delete temp;

    }
    else if(pos == len){
        Node* temp=tail;
        tail=temp->prev;
        tail->next=NULL;
        temp->prev=NULL;
        delete temp;

    }
    else{
        // we wnat to delete any node
        Node* temp=head;
        for(int i=0;i<pos-2;i++){
            temp=temp->next;
        }

        Node* curr=temp->next;
        Node* forward=curr->next;
        temp->next=forward;
        forward->prev=temp;
        curr->next=NULL;
        curr->prev=NULL;
        delete curr;
    }
    }
}

int main(){
    Node* head=NULL;
    Node* tail=NULL;

    insertAtHead(10,head,tail);
    insertAtHead(20,head,tail);
    // print(head);
    // printReverse(tail);

    insertAtTail(10,head,tail);
    insertAtTail(200,head,tail);
    insertAtTail(780,head,tail);
    // print(head);


    insertAtPos(2,999,head,tail);
    insertAtPos(3,609,head,tail);
    print(head);
    // cout<<searchInLL(head,200);

    deleteFromPos(3,head,tail);
    print(head);
    deleteFromPos(6,head,tail);
    print(head);
}