class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
         int n = nums.size();
          sort(nums.begin() ,nums.end());
         int maxi = 1 ;
         int lastindex = 0;
      vector<int> dp(nums.size() , 1);
      vector<int>  hash(nums.size() , 0);
      
        for(int i = 1 ; i<n ; i++){
              hash[i] = i  ;
            for(int  prev  = 0 ; prev<i ; prev++ ){
                
                 if(nums[i] % nums[prev] == 0  &&   1+dp[prev] > dp[i] ){
                     
                     dp[i] = 1 + dp[prev];
                     hash[i] = prev;
        
                 }
                  
                
            }
             if(dp[i] > maxi){
                  maxi = dp[i];
                  lastindex = i;
             }
        
        }
        
         vector<int> temp;
          
        while( hash[lastindex]  != lastindex){
             temp.push_back(nums[lastindex]);
                 lastindex = hash[lastindex];
        }
         temp.push_back(nums[lastindex]);
        reverse(temp.begin() , temp.end());
         return temp;
    }
    
};