//using map and queue
vector<int> verticalOrder(Node *root)
{
    //Your code here
    vector <int> res;
    map <int,vector<int>> mp;
    queue <pair<Node*,int>> q;
     int hd;
    q.push(make_pair(root,0));
   
    mp[0].push_back(root->data);
    while(!q.empty()){
        Node* curr=q.front().first;
        hd=q.front().second;
        if(curr->left){
            mp[hd-1].push_back(curr->left->data);
        }
         if(curr->right){
            mp[hd+1].push_back(curr->right->data);
        }
        q.pop();
        if(curr->left){
            q.push(make_pair(curr->left,hd-1));
        }
         if(curr->right){
           q.push(make_pair(curr->right,hd+1));
        }
    }
  for(auto it=mp.begin();it!=mp.end();++it)
        {
        for(int i=0;i<it->second.size();i++)
            res.push_back(mp[it->first][i]);
        }
    return res;
}
//using resursion by finding the leftmost and right most point
#include <iostream>
using namespace std;
class Node{
    public:
  int data;
  Node* left;
  Node* right;
  
  Node(int d){
       data=d;
      left=NULL;
      right=NULL;
  }
};

void minmax(Node* root,int hd,int *min, int *max){
    if(root==NULL)return;
    if (hd < *min)  *min = hd; 
    else if (hd > *max) *max = hd; 
 
    minmax(root->left,hd-1,min,max);
    minmax(root->right,hd+1,min,max);
}
void print(Node* root,int line,int hd){
    if(root==NULL)return;
    if(hd==line)cout<<root->data<<" ";
    print(root->left,line,hd-1);
    print(root->right,line,hd+1);
    return;
}

void verticalOrder(Node* root){
    
    int min=0;
    int max=0;
    
    minmax(root,0,&min,&max);
    for(int line=min;line<=max;line++){
        print(root,line,0);
        cout<<endl;
    }
    return;
}

int main() {
	 Node *root =new Node(1); 
	 
    root->left =new Node(2); 
    root->right =new Node(3); 
    root->left->left =new Node(4); 
    root->left->right =new Node(5); 
    root->right->left =new Node(6); 
    root->right->right =new Node(7); 
    root->right->left->right =new Node(8); 
    root->right->right->right =new Node(9); 
  
    cout << "Vertical order traversal is \n"; 
    verticalOrder(root); 
    
  
	return 0;
}
