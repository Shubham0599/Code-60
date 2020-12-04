#include <iostream>
#include <algorithm>
using namespace std;




bool solve(int arr[],int n,int x){
     
	    for(int i=0;i<n-2;i++){
	        int sum=x-arr[i];
	        int j=i+1,k=n-1;
	        while(j<k){
	            int p=arr[j]+arr[k];
	            if(p==sum){
	                return true;
	            }
	            else if(p<sum)j++;
	            else k--;
	        }
	        
	    }
	    
    return false;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	   // bool res=solve(arr,n,x);
	    cout<<solve(arr,n,x)<<endl;
	   
	}
	return 0;
}