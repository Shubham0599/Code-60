//approch to solve in 0(nlogn)
#include <iostream>
#include <algorithm>
using namespace std;
int findDuplicate(vector <int> arr){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            return arr[i];
        }
    }
    return -1;
}

int main() {
	vector <int> arr={1,2,3,4,5,3};
	cout<<findDuplicate(arr);
	return 0;
}

//approch to solve in o[n]
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      int n=nums.size();
        int ind;
        for(int i=0;i<n;i++){
             ind=abs(nums[i]);
            if(nums[ind]<0){
            return ind;
            }    
            else{
                 nums[ind]=-nums[ind];
            }
    }
        return -1;
    }
};