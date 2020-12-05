//wrong for the folloeing test case
#include <iostream>
using namespace std;

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
	    int sum=0;
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	    }
	    int sum1=sum,sum2=sum;
	    int count=0;
	    
	    int j=1;
	    for(int i=0;i<n;i++){
	        if(sum1-arr[i]>x){
	            sum1-=arr[i];
	            count++;
	        }
	        else if(sum1-arr[n-j]>x){
	            sum1-=arr[n-j];
	            j++;
	            count++;
	        }
	        else break;
	    }
	    int result=n-count;
	    count=0;
	    j=0;
	    for(int i=n-1;i>=0;i--){
	        if(sum2-arr[i]>x){
	            sum2-=arr[i];
	            count++;
	        }
	        else if(sum2-arr[j]>x){
	            sum2-=arr[j];
	            j++;
	            count++;
	        }
	        else break;
	    }
	    int res=min(result,n-count);
	    cout<<res<<endl;
	}
	return 0;
}



//working code
#include <iostream>
#include <climits>
using namespace std;

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
	    int sum=0;
	    int mi=INT_MAX;
	    int i=0,j=0;
	    while(i>=j &&i<n){
	        while(sum<=x&&i<n){
	            sum+=arr[i];
	            i++;
	        }
	        while(sum>x&&j<i){
	            mi=min(mi,i-j);
	            sum-=arr[j];
	            j++;
	        }
	        
	    }
	    cout<<mi<<endl;
	}
	return 0;
}