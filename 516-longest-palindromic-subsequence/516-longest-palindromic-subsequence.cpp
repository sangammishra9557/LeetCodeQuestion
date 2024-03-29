class Solution {
public:
    int longestPalindromeSubseq(string s) {
          string t =   s ; 
          reverse(t.begin() , t.end());
          int n = s.size() ; 
          int m  = n ; 
          vector<vector<int>> memo(n+1 , vector<int> (m+1 , 0));
                                   
                                   
         for(int i = 1 ; i <= n ; i++){
              for(int j = 1 ; j<= m ; j++){
                  
                   if(s[i-1] == t[j-1])
                   {
                       memo[i][j] =  1 + memo[i-1][j-1];
                   }
                   else  {
                        memo[i][j] = max(memo[i-1][j]  , memo[i][j-1]);
                   }
              }
         }
         return memo[n][n];
        
    }
    
    
    
};