class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
         int n  = nums.size();
         vector<vector<int>> memo(n+1 , vector<int>(n+1 , -1 ));
       return lis(0 ,   -1    , nums , memo);
    }
     int lis( int index , int prev_index , vector<int> & nums , vector<vector<int>> &memo){
          if ( index == nums.size()) return  0 ; 
         int take = 0;
         
          if(memo[index][prev_index+1] != -1) return memo[index][prev_index+1];
         
              if( prev_index == -1  ||  nums[index] > nums[prev_index ])
              take = 1 + lis( index+1 ,  index , nums , memo);
         
         int nottake = lis( index+1 , prev_index  , nums , memo);
         
          return memo[index][prev_index+1]= max(take , nottake  );
     }
};