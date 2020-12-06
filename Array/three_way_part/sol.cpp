class Solution{   
public:
    vector <int> threeWayPartition(vector<int> arr,int a, int b)
    {
        // code here 
        // int n=arr.size();
        // int l=0;
        // int r=n-1;
        // for(int i=0;i<n;i++){
        //     if(arr[i]<a){
        //         swap(arr[i],arr[l]);
        //         l++;
        // }
        // else if(arr[i]>b){
        //     swap(arr[i],arr[r]);
        //     r--;
        //     i--;
        // }
        // }
        // return arr;
        sort(arr.begin(),arr.end());
        return arr;
    }
};