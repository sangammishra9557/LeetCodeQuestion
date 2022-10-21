class Solution {
public:
    vector<vector<int>> ans ; 
    vector<vector<int>> subsets(vector<int>& nums) {
        
         // vector<int> temp ; 
         // generateSets(nums , 0 , temp);
         //  return ans ; 
        
           int n  = nums.size();
         
          for( int i = 0 ; i< 1 << n ; i++){
              
               vector<int> temp ; 
               for( int  j  = 0 ; j <n ; j++ ){
                    if( (i & (1<<j)) != 0) temp.push_back(nums[j]);
               }
              ans.push_back(temp);
          }
          return ans ; 
    }
        
         
    void generateSets(vector<int> & nums  , int ci  ,  vector<int> &temp){
             
              if( ci >= nums.size()) {
                  ans.push_back(temp);
                  return ;  
              }
             
               generateSets( nums , ci+1  , temp );
               temp.push_back(nums[ci]);
               generateSets( nums , ci+1   , temp );
               temp.pop_back();
              
        

         
    }
};