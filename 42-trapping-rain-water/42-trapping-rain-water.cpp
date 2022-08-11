class Solution {
public:
    int trap(vector<int>& nums) {
         int ans = 0  ;
         int  n = nums.size();
         int  left = 0 ; 
         int right = n-1;
         int ml  , mr = 0  ; 
        
         while(left <= right){
              if(nums[left] <= nums[right]){
                  
                  if(nums[left] >= ml) ml = nums[left];
                  else ans += ml- nums[left];
                  left++;
              }
             
              else {
                    if (nums[right] >= mr ) mr = nums[right];
                    else ans += mr - nums[right];
                    right--;
              }
         }
         return ans;
        
    }
};