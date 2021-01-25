#include <iostream>
#include <queue>
using namespace std;
//8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
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

class Pair{
    public:
int height;
int diameter;
};
Pair fastdiameter(node *root){
Pair p;
if(root==NULL){
    p.height=p.diameter=0;
    return p;
    }
    Pair lef=fastdiameter(root->left);
    Pair rig=fastdiameter(root->right);
    p.height=1+max(lef.height,rig.height);
    p.diameter=max((lef.height+rig.height),max(lef.diameter,rig.diameter));
    return p;
}
int replacenode(node* root){
if(root==NULL)return 0;
if(root->left==NULL&&root->right==NULL)return root->data;
int lef=replacenode(root->left);
int rig=replacenode(root->right);
int rd=root->data;
root->data=lef+rig;

return rd +root->data;

}

int main(){
    node * root=build();
    print(root);
    cout<<endl;
    Pair pp=fastdiameter(root);
    cout<<"height"<<pp.height<<" Diameter"<<pp.diameter;
    cout<<endl;
    replacenode(root);
    print(root);

return 0;
}
