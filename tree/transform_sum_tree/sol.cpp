int solve(Node* root){
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL){
        int val=root->data;
        root->data=0;
        return val;
    }
    int l=solve(root->left);
    int r=solve(root->right);
    int val=root->data+l+r;
    root->data=l+r;
    return val;
}

void toSumTree(Node *node)
{
    // Your code here
    solve(node);
    return ;
}