//naive approch
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int res=0,i=0;
	    int result=-1;
	    while(i<n){
	        int count=0;
	        for(int j=0;j<m;j++){
	            //count+=arr[i][j];
	            if(arr[i][j]==1)count++;
	        }
	        res=max(res,count);
	        if(res==count)result=i;
	        i++;
	    }
	    return result;
	}

};

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