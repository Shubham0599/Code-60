#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	int c_sum=arr[0],g_sum=arr[0];
	for(int i=1;i<n;i++){
	    c_sum=max(arr[i],arr[i]+c_sum);
	    g_sum=max(c_sum,g_sum);
	}

	cout<<g_sum<<endl;
	}
	return 0;  
}