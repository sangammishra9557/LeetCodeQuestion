class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        // int l = 0, r = 0, n = nums.size(), sum = 0, len = INT_MAX;
        // while (r < n) {
        //     sum += nums[r++];
        //     while (sum >= s) {
        //         len = min(len, r - l);
        //         sum -= nums[l++];
        //     }
        // }
        // return len == INT_MAX ? 0 : len;
        
        
         int n = nums.size();
         int i = 0 ;
          int sum = 0;
          int ans = INT_MAX;
        for( int j = 0 ; j<n ; j++){
             sum +=  nums[j];
            
              while (sum >= s){
                 ans = min(ans , j - i+1);
                  sum -= nums[i++];
                }
             }
            
         if( ans == INT_MAX) return 0 ; 
         return ans;
}
};