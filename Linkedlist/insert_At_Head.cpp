// // insert at Head
// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next=NULL;

//     // constructor
//     Node(int val){
//         this->data=val;
//         this->next=NULL;
//     }
// };

// Node* insertAtHead(int val,Node* head,Node* tail){
//     if(head == NULL && tail == NULL){
//         // LL is empty
//     // we creating a new Node of LL
//     // step1 : create a New Node
//     Node* newNode=new Node(val);
//     // step 2: Head ko node pr lagado
//     head=newNode;
//     // step 3: tail ko newNode pr lagado
//     tail=newNode;
//     }

//     else{
//         // LL is not empty
//         Node* newNode=new Node(val);
//         newNode->next=head;
//         head=newNode;
//     }
//     return head;
    

// }
// void print(Node* head){
//     Node* temp=head;
//     while(temp != NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }

// int main(){
//     Node* head=NULL;
//     Node* tail=NULL;
//     head = insertAtHead(10,head,tail);
//     // print(head);
//     head = insertAtHead(20,head,tail);
//     // print(head);
//     head = insertAtHead(30,head,tail);
//     // print(head);
//     head =insertAtHead(40,head,tail);
//     print(head);

// }

#include<iostream>
#include<string>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int val){
        cout<<"Constructor is calling"<<endl;
        this->data=val;
        this->next=NULL;
    }

     

};
Node* insertAtHead(Node* &head,Node* &tail,int val){
        // LL is empty
        if(head ==NULL && tail == NULL){
            Node* newNode=new Node(val);
            head=newNode;
            tail=newNode;
        }
        else{
            Node* newNode=new Node(val);
            newNode->next=head;
            head=newNode;
        }
        return head;
    }

    void print(Node* &head){
        Node* temp=head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
            
        }
    }

    bool searchLL(int target,Node* head){
        Node* temp=head;
        while(temp != NULL){
            if(temp->data == target){
                return true;
            }
            temp=temp->next;
        }
        return false;
    }

    // deletion in LL
    void llDeletion(int pos,Node* &head,Node* &tail){
        // if LL is empty
        if(head==NULL && tail ==NULL){
            cout<<"No node to delete"<<endl;
        }
        else if(head== tail){
            // single node
            Node* temp=head;
            head=NULL;
            tail=NULL;
            delete temp;
        }
        else{
            // multiple nodes inside LL
            //  2 case
            // first case --> pos=1
            if(pos == 1){
                Node* temp=head;
                head=temp->next;
                temp->next=NULL;
                delete temp;
            }
            else{
                // any other node except _one
                Node* prev=head;
                for(int i=0;i<pos-2;i++){
                    prev= prev->next;
                }

                Node* curr=prev->next;
                Node* forward=curr->next;
                prev->next=forward;
                curr->next=NULL;
                delete curr;
            }
        }
    }


    int main(){
        Node* head=NULL;
        Node* tail=NULL;
        int target=20;
        
        head=insertAtHead(head,tail,10);
        // print(head);
        head = insertAtHead(head,tail,20);
        // print(head);
        head=insertAtHead(head,tail,30);
        print(head);
        // bool ans = searchLL(target,head);
        // cout<<ans;
        llDeletion(1,head,tail);

    }