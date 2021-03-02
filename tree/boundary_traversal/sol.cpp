void lview(Node* root,vector <int> & res){
    if(root==NULL)return;
    if(root->left!=NULL||root->right!=NULL)res.push_back(root->data);
    if(root->left){
        lview(root->left,res);
    }
    else if(root->right){
        lview(root->right,res);
    }
    
}

void leaf(Node* root,vector <int> & res){
    if(root==NULL)return;
    if(root->left==NULL&&root->right==NULL){
        res.push_back(root->data);
        return;
    }
    leaf(root->left,res);
    leaf(root->right,res);
    
}
void rview(Node* root,vector<int> &res){
    if(root==NULL)return;
    if(root->right){
        rview(root->right,res);
        res.push_back(root->data);
    }
    else if(root->left){
        rview(root->left,res);
        res.push_back(root->data);
    }
}

vector <int> printBoundary(Node *root)
{
     //Your code here
     vector <int> res;
 if(root==NULL) return res;
        
         res.push_back(root->data);
         lview(root->left,res);
         leaf(root,res);
         rview(root->right,res);
        return res;
   
}