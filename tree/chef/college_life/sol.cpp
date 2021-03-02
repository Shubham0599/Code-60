#include <iostream>
#include<map>
#include <vector>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int season;
	    cin>>season;
	    int intro_t[1002];
	    for(int i=0;i<season;i++){
	        cin>>intro_t[i];
	    }
	    map <int,pair<int,vector<int>>> mp;
	    for(int j=0;j<season;j++){
	        int episode;
	        cin>>episode;
	        vector <int> res;
	        for(int p=0;p<episode;p++){
	            int e;
	            cin>>e;
	            res.push_back(e);
	        }
	        mp[j]=(make_pair(episode,res));
	    }
	    int total=0;
	    
	   
	        for(auto p:mp){
	            bool first =true;
	           
	            for(int k=0;k<p.second.first;k++){
	                if(first==true){
	                    total+=p.second.second[k];
	                    first=false;
	                }
	                else{
	                    total+=p.second.second[k]-intro_t[p.first];
	                }
	              
	            }
	        }
	    
	    cout<<total<<endl;
	}
	return 0;
}
