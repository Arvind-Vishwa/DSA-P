// Searching in LinkedList
#include<bits/stdc++.h>
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

bool searchLL(Node* &head,Node* &tail,int val){
    Node* temp=head;
    while(temp != NULL){
        if(temp->data == val){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

Node* insertAtHead(Node* &head,Node* & tail,int val){
    // LL is empty
    if(head == NULL && tail == NULL){
        Node* newNode=new Node(val);
        head=newNode;
        tail=newNode;
    }else{
        Node* newNode=new Node(val);
        newNode->next=head;
        head=newNode;
    }
    return head;
}

int main(){
Node* head=NULL;
Node* tail=NULL;

head=insertAtHead(head,tail,10);
head=insertAtHead(head,tail,20);
head=insertAtHead(head,tail,30);
head=insertAtHead(head,tail,40);
head=insertAtHead(head,tail,50);
bool ans = searchLL(head,tail,90);
if(ans == true){
    cout<<"founded"<<endl;
}else{
    cout<<"Not founded"<<endl;
}
}