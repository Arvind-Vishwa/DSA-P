#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    public:
    Node(int val){
        this->data=val;
        left=NULL;
        right=NULL;
    }
};

    Node* createNode(){
        cout<<"Enter the node"<<endl;
        int value;
        cin>>value;

        // base case
        if(value == -1){
            return NULL;
        }
        else{
            Node* root=new Node(value);
            cout<<"enter the left child for "<<value<<endl;
            root->left=createNode();

            cout<<"enter thr right child for "<<value<<endl;
            root->right=createNode();

            return root;
        }
    }

void preorderTraversal(Node* root){
    if(root == NULL){
        return;
    }

    // NLR
    cout<<root->data<<endl;
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}


int main(){
    Node* root=createNode();
}
    