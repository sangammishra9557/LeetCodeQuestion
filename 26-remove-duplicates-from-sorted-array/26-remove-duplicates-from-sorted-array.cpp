class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(); 
        int i = 0 ; 
        int j = 1 ; 
        for(int  j = i+1 ; j<n ; j++){
             if(nums[i] == nums[j]) continue ; 
             nums[++i] = nums[j];
        }
        return i+1;
    }
};