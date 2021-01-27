#include <iostream>
#include <stack>
using namespace std;
class node{
    public:
    int data;
    node * left;
    node* right;
    
    node(int d){
        data=d;
        left=NULL;
        right=NULL;
        
    }
};

//inorder
void inorderrec(node* tree){
    if(tree==NULL)return;
    inorderrec(tree->left);
    cout<<tree->data<<" ";
    inorderrec(tree->right);
    return;
}

//preorder
void preorderrec(node* tree){
    if(tree==NULL)return;
    cout<<tree->data<<" ";
    preorderrec(tree->left);
    
    preorderrec(tree->right);
    return;
}
//postorder
void postorderrec(node* tree){
    if(tree==NULL)return;
    postorderrec(tree->left);
    
    postorderrec(tree->right);
    cout<<tree->data<<" ";
    return;
}

//inorder
void inorderitt(node* root){
    node* curr=root;
    stack <node*> s;
    while(!s.empty()||curr!=NULL){
        if(curr!=NULL){
            s.push(curr);
            curr=curr->left;
        }
        else{
            curr=s.top();
            cout<<curr->data<<" ";
            s.pop();
            curr=curr->right;
        }
    }
}
//preorder
void preorderitt(node* root){
stack <node*> s;
s.push(root);
while(!s.empty()){
    node* curr=s.top();
    s.pop();
    cout<<curr->data<<" ";
    if(curr->right)s.push(curr->right);
    if(curr->left)s.push(curr->left);
}
return;
}

//postorder
void postorderitt(node* root){
stack <node*> s;
s.push(root);
stack <int> out;
while(!s.empty()){
    node* curr=s.top();
    s.pop();
    out.push(curr->data);
    if(curr->left)s.push(curr->left);
    if(curr->right)s.push(curr->right);
}
while(!out.empty()){
    cout<<out.top()<<" ";
    out.pop();
}
return;
}

int main() {
    	node* tree = new node(5); 
    tree->left = new node(3); 
    tree->right = new node(6); 
    tree->left->left = new node(2); 
    tree->left->right = new node(4);
     cout<<"Recursive approach inorder"<<endl;
    inorderrec(tree);
    cout<<endl<<"Itrtive approach inorder"<<endl;
    inorderitt(tree);
      cout<<endl<<"Recursive approach preorder"<<endl;
    preorderrec(tree);
    cout<<endl<<"Itrtive approach preorder"<<endl;
    preorderitt(tree);
      cout<<endl<<"Recursive approach postorder"<<endl;
    postorderrec(tree);
    cout<<endl<<"Itrtive approach postorder"<<endl;
    postorderitt(tree);
	return 0;
}