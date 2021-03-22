bool check(int src, vector<int>adj[],map <int,bool> &visited){
      queue<int> q;
    
    map<int,int> parent;
    q.push(src);
    visited[src]=true;
    parent[src]=src;
    while(!q.empty()){
        int f=q.front();
        q.pop();
        for(int i:adj[f]){
            if(visited[i]==true&&parent[f]!=i)return true;
            else if(visited[i]!=true){
                q.push(i);
            visited[i]=true;
            parent[i]=f;
            
            }
        }
    }
    return false;
    
}

	bool isCycle(int V, vector<int>adj[]){
	    // Code here
	    map <int,bool> visited;
	   // bool res=false;
	   // bool result;
	    for(int i=0;i<V;i++){
	        if(visited[i]!=true&&check(i,adj,visited))
	            return true;
	           
	    }
	  return false;
	}