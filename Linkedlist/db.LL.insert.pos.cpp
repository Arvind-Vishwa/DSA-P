// Double LL insert at POs
#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int val){
        data=val;
        prev=nullptr;
        next=nullptr;
    }
};

void insertATPos(int val,int pos,Node* &head){
    // Assume pos should be graeterbthan 1 and size of linkedll

    // pos=3
    Node* curr=head;
    for(int i=1;i<pos-1;i++){
        curr=curr->next;
    }
    Node* newNode=new Node(val);
    Node* forw=curr->next;

    newNode->next=forw;
    forw->prev=newNode;
    curr->next=newNode;
    newNode->prev=curr;
    

    

}
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

// int getLen(Node* &head){
//     Node* temp=head;
//     int len=0;
//     while(temp != NULL){
//         len++;
//         temp=temp->next;
//     }
//     return len;
// }

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
    insertAtHead(20,head,tail);
    insertAtHead(30,head,tail);
    insertAtHead(40,head,tail);
    print(head);
    insertATPos(88,3,head);
    print(head);
    
}