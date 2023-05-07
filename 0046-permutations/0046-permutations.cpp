class Solution {
public:
    
    
    
    void helper( int index , vector<vector<int>> &ans, vector<int>& nums){
         
         if( index == nums.size()){
              ans.push_back(nums);
             return ;
         }
        
        
        for(int j = index ; j< nums.size();j++){
            
             swap(nums[j] , nums[index]);
            helper( index+1 , ans ,nums);
             swap(nums[index] , nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> ans ;  
         sort(nums.begin() , nums.end());
         ans.push_back(nums);
         while(next_permutation(nums.begin() , nums.end())){
             ans.push_back(nums);
             
         }
        return ans;
        
    }
};