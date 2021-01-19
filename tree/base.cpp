#include <iostream>
using namespace std;

class node{
    public:
int data;
node* left;
node* right;

node(int d){
data=d;
left=NULL;
right=NULL;
}
};

node* build(){
int d;cin>>d;
if(d==-1){return NULL;}
node *root=new node(d);
root->left=build();
root->right=build();
return root;
}
//preorder root left right
void print(node *root){
if(root==NULL)return;
cout<<root->data<<" ";
print(root->left);
print(root->right);
return ;
}
//inorder left root right
void inprint(node * root){
if(root==NULL) return ;
inprint(root->left);
cout<<root->data<<" ";
inprint(root->right);
}

//postorder left right root
void poprint(node * root){
if(root==NULL) return ;
poprint(root->left);
poprint(root->right);
cout<<root->data<<" ";
}
int height(node* root){
if(root==NULL)return 0;
int l=height(root->left);
int r=height(root->right);
return max(l,r)+1;
}

void printkthlvl(node* root,int k){
if(root==NULL)return;
if(k==1){
    cout<<root->data<<" ";
    return;
}
printkthlvl(root->left,k-1);
printkthlvl(root->right,k-1);
return;
}
void printlvl(node *root){
int h=height(root);
for(int i=1;i<=h;i++){
    printkthlvl(root,i);
    cout<<endl;
}
return ;
}

int main(){
    node * root =build();
    print(root);
    cout<<endl;
    inprint(root);
    cout<<endl;
    poprint(root);
    cout<<endl;
    cout<<height(root);
    cout<<endl;
    printlvl(root);
return 0;
}
