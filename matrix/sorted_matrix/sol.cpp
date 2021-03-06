// sort complexity will be (n*n)log(n*n);
//in case of priority_queue in this solution , 
//maximum element in heap in worst case will be n*sqrt(2), 
//hence complexity to add an element in heap will be 2*

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long long int a[n][n];
	    priority_queue <int, vector<int>, greater<int> > pq;
	   //    vector <int> v;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cin>>a[i][j];
	            pq.push(a[i][j]);
	        }
	    }
	   
   while(pq.size()!=0){
      cout<<pq.top()<< " ";
      pq.pop();
   }
	 cout<<endl;   
	    
	}
	
	return 0;
}