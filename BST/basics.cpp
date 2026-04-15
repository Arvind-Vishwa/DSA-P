#include<iostream>
#include<queue>
using namespace std;


class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }

};

Node* buildBST(int val,Node* root){
    // NULL case
    if(root == NULL){
        root=new Node(val);
        return root;
    }
    else{
        if(val < root->data){
            // val --> left subtree
            root->left=buildBST(val,root->left);
        }
        else{
            // val --> right subtree
            root->right=buildBST(val,root->right);
        }
    }
    return root;
}

void createTree(Node* &root){
    cout<<"Enter the value for node"<<endl;
    int val;
    cin>>val;
    
    while(val != -1){
        root =buildBST(val,root);
        cout<<"Enter the value for Node"<<endl;
        cin>>val;
    }
    
}


// print node
// level order
void levelOrder(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* front=q.front();
        q.pop();

        if(front == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<front->data<<" ";
            if(front->left){
                q.push(front->left);
            }
            if(front->right){
                q.push(front->right);
            }
        }
    }
}
int main(){
Node* root=NULL;
createTree(root);
levelOrder(root);
}