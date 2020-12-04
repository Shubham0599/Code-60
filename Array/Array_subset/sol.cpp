#include <iostream>
using namespace std;
#include <map> 
string solve(int m,int n,int arr1[],int arr2[]){
    map <int,int> mp;
	    for(int i=0;i<n;i++){
	        mp[arr2[i]]++;
	    }
	    
	    for(int i=0;i<m;i++){
	        mp[arr1[i]]--;
	    }
	  
	    bool res=true;
	    for(auto i:mp){
	       // cout<<"first"<<i.first<<" "<<"second"<<i.second<<endl;
	        if(i.second>0){
	            res=false;
	        }
	    }
	    if(res==false)return "No";
	    else return "Yes";
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m>>n;
	    int arr1[m],arr2[n];
	    for(int i=0;i<m;i++)cin>>arr1[i];
	    for(int i=0;i<n;i++)cin>>arr2[i];
	    string res=solve(m,n,arr1,arr2);
	    cout<<res<<endl; 
	}
	return 0;
}