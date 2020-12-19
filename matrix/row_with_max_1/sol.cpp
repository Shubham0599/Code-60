

//only looking at all the columns and searching for 1
//if 1 found then the respective row have max one as they are sorted
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int res=-1;
	    int j=0;
	    while(m--){
	        for(int i=0;i<n;i++){
	            if(arr[i][j]==1)return i;
	        }
	        j++;
	    }
	    return res;
	    
	}

};