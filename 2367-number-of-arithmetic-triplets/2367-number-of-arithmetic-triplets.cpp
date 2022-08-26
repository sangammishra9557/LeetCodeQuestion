class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
      
         unordered_set<int> st(nums.begin() , nums.end());
          int c = 0 ; 
           for(auto & it :  nums){
                if(st.count(it-diff) && st.count(it+diff)) c++;
               
           }
         return c;
        
    }
};