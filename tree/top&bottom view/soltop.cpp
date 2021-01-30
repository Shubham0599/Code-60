void topView(struct Node *root)
{
    //Your code here
//     if(!root)return;
//     queue <pair<Node* ,int>> q;
//     map <int,int> mp;
//     int hd=0;
//     q.push(make_pair(root,0));
//     //mp[0]=root->data;
//      //mp.insert(pair<int, int>(0,root->data)); 
//     while(!q.empty()){
       
//         Node* curr=q.front().first;
//         hd=q.front().second;
//         q.pop();
//         if(mp.count(hd) == 0)mp[hd] = curr->data;
//         // for(auto i=mp.begin();i!=mp.end();i++){
//         //     if(hd==i->first){
//         //         hai=true;
//         //     }
//         // }
//         // if(hai==false){
//         //     //mp[hd].push_back(curr->data);
//         //     mp.insert(pair<int, int>(hd,curr->data)); 
//         // }
//         if(curr->left){
//           q.push(make_pair(curr->left,hd-1)); 
//         }
//           if(curr->right){
//           q.push(make_pair(curr->right,hd+1)); 
//         }
//     }
//   for(auto x: mp) cout << x.second << " ";

    unordered_map <int,int>mp;
    queue <pair<Node*,int>> q;
    int hd=0;
    int min=0;
    int max=0;
    q.push({root,0});
    while(!q.empty()){
        pair<Node*,int> temp=q.front();
        q.pop();
        Node* curr=temp.first;
        hd=temp.second;
        if(hd<min)min=hd;
        else if(hd>max)max=hd;
       if(mp.find(hd) == mp.end())mp[hd] = curr->data;
         if(curr->left){
          q.push({curr->left,hd-1}); 
        }
          if(curr->right){
          q.push({curr->right,hd+1}); 
        }
        
    }
    for(int i=min;i<=max;i++)
    co