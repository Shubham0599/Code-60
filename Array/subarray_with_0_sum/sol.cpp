//the idea behind is that if the sum of array at index i is X and the sum at index j=also Y 
//that means at j Y=X+0;
bool subArrayExists(int arr[], int n)
{
    //Your code here
    
    map <int,int> mp;
    map<int, int>::iterator itr;
    int sum=0;
    for(int i=0;i<=n;i++){
        mp[sum]++;
        sum+=arr[i];
        }
    for(itr=mp.begin();itr!=mp.end();itr++){
        if(itr->second>1)return true;
    }
    return false;
}