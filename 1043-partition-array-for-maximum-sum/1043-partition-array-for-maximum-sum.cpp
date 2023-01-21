class Solution {
public:
    int maxValue(int i , int k , vector<int> & arr, vector<int> &dp , int n){
        
         if( i == arr.size()) return 0;
        if(dp[i] != -1) return dp[i];
        
        int len = 0 , maxi = 0 , maxiAns  = 0;
        for(int j = i ; j< min(i+k , n);j++){
            len++;
            maxi = max(maxi, arr[j]);
            int ans = (len * maxi) + maxValue(j+1 , k , arr, dp , n);
            maxiAns = max(maxiAns,ans);
            
        }
        return dp[i] =   maxiAns;
    }
    
    
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        
        int n = arr.size();
       //  vector<int> dp(n, -1);
       // return maxValue( 0 , k, arr, dp,n);
        vector<int> dp(n+1 , 0);
        for( int i = n-1 ; i>= 0 ; i--)
        {
             int len = 0 , maxi = 0 , maxiAns  = 0;
        for(int j = i ; j< min(i+k , n);j++){
            len++;
            maxi = max(maxi, arr[j]);
            int ans = (len * maxi) + dp[j+1] ;
            maxiAns = max(maxiAns,ans);
            
        }
            dp[i] = maxiAns;
        }
        return dp[0];
    }
};