//RUNTIME ERROR
class Solution{   
public:
    int median(vector<vector<int>> &a, int r, int c){
        // code here  
        int fix=(r*c +1)/2;
        int mi=INT_MAX;
        int ma=INT_MIN;
        
        for(int i=0;i<r;i++){
            mi=min(min,a[i][0]);
            ma=max(max,a[i][c-1]);
        }
        
        int result=-1;
        while(mi<ma){
            int mid=mi + (ma-mi)/2;
            int count=0;
            for(int i=0;i<r;i++){
                count+=upper_bound(a[i],a[i]+c,mid)-a[i];
            }
            if(fix==mid)result= mid;
            else if(fix<mid)ma=mid;
            else mi=mid;
        }
       return result; 
    }
};