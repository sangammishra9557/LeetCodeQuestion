class Solution {
public:
    int maxCoins(vector<int>& nums) {
           int n  = nums.size();
           nums.push_back(1);
           nums.insert(nums.begin() , 1);    // now  lets convert the code to  tabulation 
          // vector<vector<int>> dp( n+2 , vector<int> (n+2  , -1));
            vector<vector<int>> dp(n+2 , vector<int> (n+2 , 0));
        
             for( int i = n ; i >= 1  ; i--){ // revrersing the condition in case of tab
                 
                  for(int j = 1 ;  j <= n ; j++){
                       int maxi = INT_MIN;
                        
                       if( i> j ) continue ;
                      
                       for(int ind =  i ; ind <= j ; ind++){
                           
                            int cost =  nums[i-1] * nums[ind] * nums[j+1] + dp[i][ind-1]+ dp [ind+1][j];
                            maxi = max(maxi , cost);
                       }
                         
                      dp[i][j] = maxi;
                  }
             }
        
         return dp[1][n];
    
    }
    
//     int burst( int i , int j , vector<int> & nums , vector<vector<int>>  &dp){
         
//             if( i > j )   return  0 ; 
            
//           if(dp[i][j]  != -1)  return dp[i][j];
            
//            int maxi = INT_MIN ; 
           
//             for(int ind = i ; ind <= j ; ind++){
//                  int coins =    nums[i-1]  * nums[ind] * nums[j+1] + burst( i ,ind -1 , nums , dp) + burst(  ind+1 ,  j  , nums , dp);
//                   maxi = max( maxi ,  coins );    
                 
//             }

//            return  dp[i][j] =  maxi ; 
//      }
    
    
};