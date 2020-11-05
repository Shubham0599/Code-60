
class Solution{   
public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        if(n==1)return 0;
        sort(arr,arr+n);
      int res=arr[n-1]-arr[0];
      int mi=arr[0]+k;
      int max=arr[n-1]-k;
      if(max<mi)swap(max,mi);
      for(int i=1;i<n-1;i++){
          int sum=arr[i]+k;
          int diff=arr[i]-k;
          if(sum>=max&&diff<=mi){
              if(max-diff<=sum-mi) mi=diff;
              else max=sum;
          }
      }
      return min(res,max-mi);
    }
};