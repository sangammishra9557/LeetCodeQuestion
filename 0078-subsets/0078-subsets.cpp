class Solution {
public:
    vector<vector<int>> ans ; 
    vector<vector<int>> subsets(vector<int>& nums) {
        
         vector<int> temp ; 
         generateSets(nums , 0 , temp);
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