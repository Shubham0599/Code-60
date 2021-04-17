class Solution
{
    public:
    //Function to find the maximum number of cuts.
        int memo[1005];
    int dp(int n, int x, int y, int z ){
        if(memo[n]!=-1)return memo[n];
        int cut1=0,cut2=0,cut3=0;
        if(n==0)return 0;
        if(n-x>=0) cut1=1+ maximizeTheCuts(n-x,x,y,z);
        if(n-y>=0) cut2=1+ maximizeTheCuts(n-y,x,y,z);
        if(n-z>=0) cut3=1+ maximizeTheCuts(n-z,x,y,z);
        memo[n]= max(cut1,max(cut2,cut3));
        return memo[n];  
        
    }
    
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
    
    // memset(memo,-1,sizeof(memo));
    // return dp(n,x,y,z);
    // int dp[n+1];
    // dp[0]=1;
    // for(int i=1;i<n+1;i++){
    //     int op1=0,op2=0,op3=0;
    //     if(i-x>=0&&dp[i-x])op1=(i!=x?1+dp[i-x]:dp[i-x]);
    //     if(i-y>=0&&dp[i-y])op2=(i!=y?1+dp[i-y]:dp[i-y]);
    //     if(i-z>=0&&dp[i-z])op3=(i!=z?1+dp[i-z]:dp[i-z]);
    //     dp[i]=max(op1,max(op2,op3));
    // }
    //   return dp[n];
    
    
    int arr[]={x,y,z};
    
    int dp[1005][1005];
    
    for (int i = 0; i <= 3; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0) {
                dp[i][j] = INT_MIN ;
            }
            else if (j == 0) {
                dp[i][j] = 0;
            }
        }
    }
    
    for(int i=1;i<=3;i++){
        for(int j=1;j<n+1;j++){
            
            
            if(arr[i-1]<=j){
                dp[i][j]=max(1+dp[i][j-arr[i-1]],dp[i-1][j]);
            }
            else {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return (dp[3][n]<0)?0:dp[3][n];
    }
};

//another app
int dpsolve(int n, int x, int y, int z ){
    int dp[n+1];
    memset(dp,-1,n+1);
    for(int i=0;i<n+1;i++){
        if(dp[i]!=-1){
            if(i+x<=n)dp[i]=max(dp[i+x],1+dp[i]);
            if(i+y<=n)dp[i]=max(dp[i+y],1+dp[i]);
            if(i+z<=n)dp[i]=max(dp[i+z],1+dp[i])
        }
    }
return dp[n];
}
