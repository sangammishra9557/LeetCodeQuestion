class Solution {
public:
    
  vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>> ans;
//         int n = nums.size();
        
//         for(int i=0; i<(1<<n); ++i) {
//             vector<int> sub;
            
//             for(int j=0; j<n; ++j)
//                 if(i & (1<<j))
//                     sub.push_back(nums[j]);
//             ans.push_back(sub);
//         }
        
//         return ans;
      
      
 // the above code is for power  set algorithm 
      
        vector<vector<int>> ans ; 
        vector<int>   temp ;
       generatesubsets( nums , 0 ,  temp ,  ans);
        return ans ;   
       
      
    }
    private:
        void  generatesubsets(vector<int> & nums , int currentIdx , vector<int> & temp ,  vector<vector<int>> & ans){ 
             if( currentIdx >= nums.size())
             { ans.emplace_back(temp);
                   return ;
              }
               temp.push_back(nums[currentIdx]);
              generatesubsets( nums , currentIdx+1, temp , ans);
               temp.pop_back();
              generatesubsets(nums , currentIdx+1  , temp , ans);
       } 
};