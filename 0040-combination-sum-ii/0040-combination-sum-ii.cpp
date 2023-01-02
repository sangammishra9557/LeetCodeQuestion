class Solution {
public:
    
    
    
    void helper(int i , int target , vector<int> & temp , vector<int> & candidates , vector<vector<int>> & ans)         {
               if(target == 0 ){
                   ans.push_back(temp);
                   return;
               }
              if(target<0) return;
        
            
        
          for(int j = i ; j<candidates.size();j++){
            
              if( j>i && candidates[j] == candidates[j-1])continue;
             //  if(candidates[j]>target)  break;
               temp.push_back(candidates[j]);
              helper(j+1 , target-candidates[j] , temp, candidates , ans);
               temp.pop_back();
          }
        
        
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int>temp ; 
       sort(candidates.begin(),candidates.end());
        helper(0 , target, temp , candidates, ans);
       //pick and not pick wala chla skte ho phle hi et use krke dupliocate use krke 
        return ans;
    }
};