//using next_permutation function
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        next_permutation(nums.begin(),nums.end());
        
    }
};

//using o(n) approch and not using the inbuilt function next_permutation

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index1,index2;
        int n=nums.size();
        int i;
        for( i=n-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                index1=i-1;
                break;
            }
        }
        if(i==0){
            reverse(nums.begin(),nums.end());
        }
        else{
        for(int j=n-1;j>0;j--){
            if(nums[j]>nums[index1]){
                index2=j;
                break;
            }
        }
        
        swap(nums[index1],nums[index2]);
        reverse(nums.begin()+index1+1, nums.end()); 
        }
    }
};