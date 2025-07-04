#include <iostream>
#include <queue>

using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
        node(int d){
            this->data=d;
            this->left=NULL;
            this->right=NULL;
        }
};


node* buildTree(node* root){   
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}

void buildFromLevelOrder(node* &root){
    queue<node*> q;
    cout<<"Enter data for root"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        cout<<"Enter left node for: "<<temp->data<<endl;
        int leftData;
        cin>>leftData;
        if(leftData!=-1){
            temp->left=new node(leftData);
            q.push(temp->left);
        }
        cout<<"Enter right node for:"<<temp->data<<endl;
        int rightData;
        cin>>rightData;
        if(rightData!=-1){
            temp->right=new node(rightData);
            q.push(temp->right);
        }
    }

}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    return;
}

void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    //Creating a tree
    node* root=NULL;

    // root=buildTree(root);    //Data:1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    
    buildFromLevelOrder(root);  //Data:1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

    cout<<"Level order traversal output "<<endl;
    levelOrderTraversal(root);
    cout<<endl;
    cout<<"Inorder level traversal output "<<endl;
    inorder(root);
    cout<<endl;
    cout<<"Preorder level  traversal output "<<endl;
    preorder(root);
    cout<<endl;
    cout<<"Postorder level traversal output "<<endl;
    postorder(root);
    cout<<endl;

    

 

    return 0;
}