class Solution {
public:
    
    bool ispalindrome(int i  , int j , string &s){
        
        while( i <j){
            if(s[i] != s[j]) return false;
            i++, j--;
        }
        return true;
    }
    
    int minimumcuts(int i , int  n , vector<int> & dp, string &s){
        
        if( i == n) return 0 ; 
        
        if(dp[i] != -1) return dp[i];
        int mini = INT_MAX;
        for( int j = i ; j<n ; j++){
            if(ispalindrome(i, j , s)){
                int cost = 1 + minimumcuts(j+1 , n, dp , s);
                mini = min(mini , cost);
            }
        }
        
        return dp[i] = mini;
        
    }
    int minCut(string s) {
        
        int n = s.size();// yhn test case yeh ki supose a|b|c| toh last cut toh mana hi nhin jayega valid a|b|c hai ;
         // vector<int> dp (n,-1);
         // return minimumcuts( 0 , n , dp,s)-1;
            vector<int> dp (n+1 , 0);
             //fill the base case dp[n] = 0  but already filled phle ;
          for( int i = n-1 ; i >= 0; i--){
                int mini = INT_MAX;
                for( int j = i ; j<n ; j++){
            if(ispalindrome(i, j , s)){
                int cost = 1 + dp[j+1];
                mini = min(mini , cost);
            }
        }
        
         dp[i] = mini;
              
              
          }
        return dp[0]-1;
    }
};