class Solution {
public:
    int rob(vector<int>& nums) {
         int n = nums.size() ;
        if( n == 1 ) 
            return nums[0];
    
         if(n==2)
             return max(nums[0], nums[1]);
         vector<int>  memo1( n , -1);
         vector<int> memo2(n , -1);
        return max  (loot( 0 , n-1 , nums , memo1),loot(1 , n  , nums , memo2));
    
    }
    
     int loot(int currentindex , int n , vector<int> & nums , vector<int> &memo){
          if( currentindex >=n)  return  0 ; 
          if(memo[currentindex] != -1) return memo[currentindex];
          
         int consider = nums[currentindex] + loot(currentindex+2 , n , nums , memo);
         int  notconsider = 0 +loot(currentindex+1 , n , nums , memo);
         
         return memo[currentindex] = max(consider , notconsider); 
         
     }
};