#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data=val;
        this->left=NULL;
        right=NULL;
    }
    
    
};

Node* createTree(){
    cout<<"Enter the value for Node"<<endl;
    int value;
    cin >> value;

    if(value == -1){
        return NULL;
    }
    else{
        // valid value
        Node* root=new Node(value);

        // 1 case maine kr diya, baaki left and right dekh lega
        cout<<"Adding left child for"<<value<<endl;
        root->left=createTree();

        cout<<"Adding right child for "<<value<<endl;
        root->right=createTree();
        return root;
    }
}

void preOrderTraversal(Node* root){
    if(root == NULL)
    return;

    //NLR
    // N -> Node
    cout<<root->data<<" ";

    // L -> Left Subtree
    preOrderTraversal(root ->left);

    // R ->right subtree
    preOrderTraversal(root ->right);

}

void inOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    // L N R
    // L -> left
    inOrderTraversal(root->left);

    // N -> Node
    cout<<root->data<<" ";

    // R --> right
    cout<<root ->right<<endl;
}

void postOrderTraversal(Node* root){
    
    if(root == NULL)
    return;

    // LRN
    // L -> left subtree
    postOrderTraversal(root->left);

    // R ->right subtree
    postOrderTraversal(root->right);

    // N ->Node
    cout<<root->data<<" ";
}

void levelOrderTraversal(Node* root){
    queue<Node*>q;

    // initial state maintain
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* front=q.front();
        q.pop();
        if(front == NULL){
            // lvl complete hogya
            cout<<endl;

            if(!q.empty()){
                q.push(NULL);
            }
        }else{

        // fir tum print karlo
        cout<<front->data<<endl;

        // is child queue mein daaldo
        if(front->left != NULL){
            q.push(front->left);
        }
        if(front->right != NULL){
            q.push(front->right);
        }
    }
    }
}

int main(){
    Node* root;
    root=createTree();

    cout<<"printing root"<<root->data<<endl;
}