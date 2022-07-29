class Solution {
public:
int help(int ind , int prev ,vector<int>& arr,vector<vector<int>> &dp){
        if(ind == arr.size())return 0;
            
        if(dp[ind][prev+1] != -1){
            return dp[ind][prev+1];
        }
        
        int nottake = help(ind+1,prev,arr,dp);
        int take =0;
        if(prev==-1 || arr[ind]>arr[prev]){
            take = 1+help(ind+1,ind,arr,dp);
        }
        return dp[ind][prev+1]=max(nottake,take);
    }
		// // int lengthOfLIS(vector<int>& nums) {
		// int n = nums.size();
		// //APPROACH 1
		// vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
		// return help(0,-1,nums,dp);
		// // }
    
     //
    //LETS WRITE THE BEST   OPTIMAL SOLUTION
    int lengthOfLIS(vector<int>& nums) {
          vector<int>  temp ; 
          temp.push_back(nums[0]);
           for(int i = 1 ; i < nums.size() ; i++){
                if(nums[i]> temp.back()) temp.push_back(nums[i]);
               
                 else{
                      //do binary search ; 
                      int idx = lower_bound(temp.begin() , temp.end() , nums[i]) - temp.begin();
                      temp[idx] = nums[i];
                 }
           }
         return temp.size();
    }
    
};