class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
         int n = nums.size();
         int count = 0 ;
         int maxi = 0 ; 
         for(int i = 0 ; i< n ; i++){
              if(nums[i] ==  1) count++;
              if(nums[i] == 0 ){
                   maxi = max(count , maxi);
                   count = 0 ; 
              }
         } 
        return  max(maxi , count) ; 
    }
};