#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int getPairsCount(int arr[],int n,int k){
         unordered_map <int,int>m;
        int count=0;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            count+=m[k-arr[i]];
            if(k-arr[i]==arr[i])count--;
            
        }
        return count/2;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int j=0;j<n;j++)cin>>arr[j];
        Solution ob;
        auto ans=ob.getPairsCount(arr,n,k);
        count<<ans<<"\n";

    }
    return 0;
}