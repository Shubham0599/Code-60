//recursive approach using bool array
void left(Node* root,bool *lvl,int index,vector <int>& res){
    if(root==NULL)return ;
    if(lvl[index]==false){
        res.push_back(root->data);
        lvl[index]=true;
    }
    left(root->left,lvl,index+1,res);
    left(root->right,lvl,index+1,res);
}

vector<int> leftView(Node *root)
{
   // Your code here
   bool level[102]={false};
   vector <int> res;
   left(root,level,0,res);
  return res;
}
//itrative  aproach using queue
void printRightView(Node* root) 
{ 
    if (!root) 
        return; 
 
    queue<Node*> q; 
    q.push(root); 
 
    while (!q.empty()) 
    {     
      
        int n = q.size();  
        for(int i = 1; i <= n; i++) 
        { 
            Node* temp = q.front(); 
            q.pop(); 
         
            if (i == 1) {
                cout<<temp->data<<" "; 
            } 
            if (temp->left != NULL) q.push(temp->left); 
            if (temp->right != NULL)  q.push(temp->right); 
        } 
    } 
}     
//recursive appoch diff one
void leftView(Node *root, int level, auto &map)
{
    if (root == nullptr) {
        return;
    }
 
    // if the level is visited for the first time, insert the current node
    // and level information into the map
    if (map.find(level) == map.end()) {
        map[level] = root->key;
    }
 
    leftView(root->left, level + 1, map);
    leftView(root->right, level + 1, map);
}
 
// Function to print the left view of a given binary tree
int leftView(Node *root)
{
    // create an empty map to store the first node for each level
    unordered_map<int, int> map;
 
    // traverse the tree and fill the map
    leftView(root, 1, map);
 
    // iterate through the map and print left view
    for (int i = 1; i <= map.size(); i++) {
        cout << map[i] << " ";
    }
}
 