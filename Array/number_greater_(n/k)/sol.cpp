//used hashmap
#include <iostream>
#include <vector>
#include <map>
using namespace std;
vector <int> solve(int arr[],int n,int k){
    map <int,int> mp;
  
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    vector <int> v;
    //   map<int, int>::iterator i; 
    int key=n/k;
    //for(auto i=0;i<mp.size();i++)
     for(auto i :mp){
        if(i.second>key)v.push_back(i.first);
    }
    return v;
}

int main() {
	int arr[]={3, 1, 2, 2, 1, 2, 3, 3,7,7,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=4;
	vector<int> res=solve(arr,n,k);
	for(int i=0;i<res.size();i++) cout<<res[i]<<" ";
	cout<<endl;
	return 0;
}