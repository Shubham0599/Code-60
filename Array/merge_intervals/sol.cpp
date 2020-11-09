//created a vector which keep the 1st interval of input vector which is then compared with the other 
//intervals of the vector keeping the overall answer changing on comparison 
//if check fail then answer is transfered to results and similarly it is carried on



class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        
        sort(intervals.begin(),intervals.end());
        vector <vector <int>> res;
        if(n==0) return res;
        vector <int> op;
        op=intervals[0];
        
        for(int i=0;i<n;i++){
            if(op[1]>=intervals[i][0]){
               op[1]=max(op[1],intervals[i][1]);
            }
            else{
                res.push_back(op);
             op=intervals[i];
            }
        }
        res.push_back(op);
        return res;
        
    }
};