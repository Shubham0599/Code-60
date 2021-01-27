#include <iostream>
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

void printkthlvl(node* root,int k){
if(root==NULL)return ;
if(k==1)cout<<root->data<<" ";
printkthlvl(root->left,k-1);
printkthlvl(root->right,k-1);
return;
}

int height(node* root){
if(root==NULL)return 0;
return 1+max(height(root->left),height(root->right));
}

void printbfs(node* root){
int h=height(root);
for(int i=1;i<=h;i++){
    printkthlvl(root,i);
    cout<<endl;
}
return;
}
void mirror(node* root)
{
    if(root){
        mirror(root->left);
        mirror(root->right);
        node* temp=root->left;
        root->left=root->right;
        root->right=temp;
    }

    return;
}




int main() {
	//code
	node* tree = new node(5); 
    tree->left = new node(3); 
    tree->right = new node(6); 
    tree->left->left = new node(2); 
    tree->left->right = new node(4);
    printbfs(tree);
    mirror(tree);
    cout<<"Mirror"<<endl;
    printbfs(tree);
  
	return 0;
}