class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       //  unordered_set<int>  st; 
       //  for(int & i : nums) st.insert( i);
       // int maxi = 0;
       //  int count = 0 ; 
       //   int current ; 
       //  for( auto  &i : st){  // yhn pe iska time minimize kr skte hain st pe iterate krke 
       //       if(st.count(i-1)) continue ;  // iska mtlb ko woh sequqnce ka starting nhin ho skta hai ; 
       //       else {
       //            count = 0;
       //            current = i;
       //            while( st.count(current)){
       //                 count+= 1;
       //                current++;
       //                maxi = max(maxi , count);
       //            }
       //       }
       //  }
       //  return maxi ;
        
        
        
        
        
         int n = nums.size();
     unordered_set<int> st;
        for(int & i: nums)st.insert(i);
        
           int c = 0;
           int maxi = 0;
           for(int i = 0 ; i<n ; i++){
               
                 if(st.count(nums[i]-1) == 0){
                     
                      c = 0; 
                      int curr = nums[i];
                      while(st.count(curr)){
                          c++;
                          curr++;
                         
                      }
                      maxi = max(maxi , c);
                 }
           }
         return maxi;
    }
};