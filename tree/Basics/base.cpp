#include <iostream>
#include <queue>
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
int p;
cin>>p;
if(p==-1) return NULL;
node* root=new node(p);
root->left=build();
root->right=build();
return root;
}
void print(node *root){
if(root==NULL)return ;
cout<<root->data<<" ";
print(root->left);
print(root->right);
return ;
}

int height(node * root){
if(root==NULL) return 0;
int l=height(root->left);
int r=height(root->right);
return max(l,r)+1;
}

void printkthlvl(node* root,int k){
if(root==NULL) return;
if(k==1){
    cout<<root->data<<" ";
    return;
}
printkthlvl(root->left,k-1);
printkthlvl(root->right,k-1);
return;
}
void printlvl(node * root){
int h=height(root);
for(int i=1;i<=h;i++){
    printkthlvl(root,i);
    cout<<endl;
}
return;
}

//void bfs(node* root){
//queue <node*> q;
//q.push(root);
//while(!q.empty()){
//    node* f=q.front();
//    cout<<f->data<< " ";
//    q.pop();
//
//    q.push(f->left);
//    q.push(f->right);
//
//}
//return;
//}

void bfs(node* root){
queue <node*> q;
q.push(root);
q.push(NULL);
while(!q.empty()){
    node* f=q.front();
    if(f==NULL){
        cout<<endl;
        q.pop();
        if(!q.empty()){
            q.push(NULL);
        }
    }
    else{
    cout<<f->data<<" ";
    q.pop();
    if(f->left){
        q.push(f->left);
    }
    if(f->right){
        q.push(f->right);
    }
    }
}
return;
}

int noofnode(node* root){
if(root==NULL)return 0;
return 1+noofnode(root->left)+noofnode(root->right);
}

int sumofnode(node* root){
if(root==NULL)return 0;
return root->data + sumofnode(root->left)+sumofnode(root->right);
}

int main(){
    node * root=build();
    print(root);
    cout<<endl;
    cout<<"total no of node in tree:"<<noofnode(root);
    cout<<endl;
    cout<<"Sum:"<<sumofnode(root);
//    cout<<height(root);
//    cout<<endl;
//    printkthlvl(root,3);
//    cout<<endl;
//    printlvl(root);
//    cout<<"bfs"<<endl;
//    bfs(root);
return 0;
}
