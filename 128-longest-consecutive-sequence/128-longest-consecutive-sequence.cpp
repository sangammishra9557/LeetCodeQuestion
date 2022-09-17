class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>  st; 
        for(int & i : nums) st.insert( i);
       int maxi = 0;
        int count = 0 ; 
         int current ; 
        for( auto  &i : nums){
             if(st.count(i-1)) continue ;  // iska mtlb ko woh sequqnce ka starting nhin ho skta hai ; 
             else {
                  count = 0;
                  current = i;
                  while( st.count(current)){
                       count+= 1;
                      current++;
                      maxi = max(maxi , count);
                  }
             }
        }
        return maxi ;
    }
};