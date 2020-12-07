#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int k;
	    cin>>k;
	    int count=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]<=k)count++;
	    }
	    int swp=0;
	    for(int i=0;i<count;i++)if(arr[i]>k)swp++;
	   
	    int ans=swp;
	    int j=count;
	    int i=0;
	    while(j<n){
	        if(arr[i]>k)swp--;
	        if(arr[j]>k)swp++;
	        ans=min(ans,swp);
	        i++;j++;
	    }
	    cout<<ans<<endl;
	    
	}
	return 0;
}