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

void preorderTraversal(Node* root){
    if(root == NULL)
    return;

    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void inorderTraversal(Node* root){
    if(root == NULL)
    return;

    // LNR
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}

void postorderTraversal(Node* root){

    if(root == NULL)
    return;

    // LRN
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<" ";
}

int getMin(Node* root){
    
    if(root == NULL)
    return -1;

    while(root->left != NULL){
        root=root->left;
    }

    // ab root ek dum extreme pr h
    return root->data;
    
}

int getMax(Node* root){
    if(root == NULL)
    return -1;

    while (root ->right != NULL)
    {
        root=root->right;
    }

    return root->data;
    
}

bool searchBST(Node* root,int target){
    if(root == NULL)
    return false;

    if(root->data ==  target){
        return true;
    }else{
        if(target < root->data){
            bool leftAns=searchBST(root->left,target);
            if(leftAns == true)
            return true;
        }else{

            bool rightAns=searchBST(root->right,target);
            if(rightAns == true)
            return true;
        }
    }
    return false;
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

cout<<endl<<"inorder";  // inorder traversal is always sorted
inorderTraversal(root);

int min=getMin(root);
cout<<endl;
cout<<"min: "<<min<<endl;

int max=getMax(root);
cout<<"max :"<<max<<endl;

bool ans=searchBST(root,200);
cout<<ans<<endl;

}