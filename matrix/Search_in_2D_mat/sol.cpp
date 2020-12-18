class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row=matrix.size();
        // in absence of below line ,,,RUNTIME erreo was given becoz of empty matrix
        if(!row) return 0;
        int col=matrix[0].size();
        if(!col) return 0;
        int i=0,j=col-1;
       
        
        while(i<row && j>=0 &&j<col&&i>=0){
            int p=matrix[i][j];
            if(p==target){
                return 1;
            }
            else if(p>target)j--;
            else i++;
        }
        return 0;
        
    }
};