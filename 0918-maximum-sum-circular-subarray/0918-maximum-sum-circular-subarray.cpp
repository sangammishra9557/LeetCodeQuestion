class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
       // need to take care the entire solution that is all values are negative ;  
       int n = nums.size();
       int sum = 0 , sum2 = 0; 
       int maxi = INT_MIN, mini = INT_MAX;
       int tsum  = 0;
       for(int i = 0 ; i<n; i++){
           tsum += nums[i];
           sum += nums[i];
           maxi = max(maxi, sum);
           if(sum<0) sum =0;
           
           sum2 += nums[i];
           mini = min(mini, sum2);
           if(sum2>0) sum2= 0;
           
       }
       mini = tsum -mini;
       if(!mini) return maxi;
       return max(mini,maxi);
     
        
       
    }
};