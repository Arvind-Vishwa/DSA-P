// deletion in LL
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        this->data=val;
        this->next=NULL;
    }
};

Node* insertATtail(Node* &head,Node* &tail,int val){
        // LL empty
    if(head == NULL && tail == NULL){
        Node* newNode=new Node(val);
        head=newNode;
        tail=newNode;
    }else{
        Node* newNode=new Node(val);
        tail->next=newNode;
        tail=newNode;
    }
    return head;
}

Node* deleteLL(Node* &head,Node* &tail,int pos){
    Node* curr=head;
    if(pos == 1){
        // first node
        head=curr->next;
        curr->next=NULL;
        delete curr;
    }else{
        Node* prev;
        for(int i=1;i<pos-1;i++){
            prev=prev->next;
        }
        curr=prev->next;
        Node* forward=curr->next;
        prev->next=forward;
        curr->next=NULL;
        delete curr;
    }
    return head;
}

int main(){
    Node* head=NULL;
    Node* tail=NULL;

    head=insertATtail(head,tail,10);
    head=insertATtail(head,tail,20);
    head=insertATtail(head,tail,30);
    head=insertATtail(head,tail,40);

    head=deleteLL(head,tail,1);

    Node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" --> ";
        temp=temp->next;
    }cout<<"NULL"<<endl;
}