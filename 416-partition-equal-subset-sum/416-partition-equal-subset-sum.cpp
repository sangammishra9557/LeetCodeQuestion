class Solution {
public:
    bool canPartition(vector<int>& nums) {
    int  target =   accumulate(nums.begin() , nums.end() , 0);
        
     if( target % 2 != 0)  return false ;   
         target = target/2;
       vector<vector<int>> memo(nums.size()+1  , vector<int>(target+1 , -1));
         return canfind(  0 , target ,  nums  , memo);
         
    }
    
    
     bool  canfind(int current , int  target  , vector<int> & nums , vector<vector<int>> &memo){
          if( target == 0 ) return true ;
          if(current == nums.size())  return false ;
         
           if(memo[current][target] != -1) return memo[current][target];
          bool  consider = false; 
         
          bool notconsider = canfind( current+1 , target , nums ,memo);
          if(nums[current] <= target) 
                consider = canfind(current+1 , target - nums[current] ,  nums , memo);
         
         
          return memo[current][target] = consider || notconsider;
     }
};