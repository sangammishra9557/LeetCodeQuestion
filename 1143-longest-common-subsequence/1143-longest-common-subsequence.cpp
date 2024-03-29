class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
     // NOW THE TABULATION CODE STARTS ; 
        int n = text1.size() ; 
        int m  = text2 .size();
        vector<vector<int>> dp( n+1 , vector<int> ( m+1 , -1));
         return lcs( n-1  ,m-1 , text1 , text2 , dp );
        //  THIS IS THE CODE FO   TBAULATION 
//          for(int i = 0 ; i<= n ; i++) dp[i][0] = 0 ; 
//          for(int i = 0 ; i<= m ; i++) dp[0][i] = 0 ;
//          for(int i = 1  ; i<= n ; i++)
//         {
//               for(int j =1 ; j<= m ; j++){
                  
//                     if( text1[i-1] == text2[j-1])
//                     { dp[i][j] =  1 + dp[i-1][j-1];
//                     }
//                     else 
//                          dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
//               }
//         }
//          return dp[n][m];
        // NOW LETS START THE    SPACE OPTIMIZATIOKN SOLUTION 
        // for(int i = 0 ; i<= n ; i++) dp[i][0] = 0 ;  / DONT NEED THIS LINE   BACESUAE NOW WE DONT HAVE  COLUMNS 
        
        vector<int> prev(m+1 , 0) , curr(m+1 , 0);
         for(int i = 0 ; i<= m ; i++) prev[i] = 0 ;
         for(int i = 1  ; i<= n ; i++)
        {
              for(int j =1 ; j<= m ; j++){
                  
                    if( text1[i-1] == text2[j-1])
                    {  curr[j] =  1 + prev[j-1];
                    }
                    else 
                          curr[j] = max(prev[j] , curr[j-1]);
              }
              prev= curr;
        }
         return  prev[m];
        
    }
      int lcs( int i , int  j , string &s1 , string &s2 , vector<vector<int>> &dp ){
          
          
           if(i< 0 || j < 0)  return  0 ; 
           
           if(dp[i][j] != -1 )  return dp[i][j];
          
          
           if(s1[i] == s2[j])
                 return  dp[i][j] = 1+ lcs( i-1 , j-1 , s1 , s2 , dp);
          
           else 
                return dp[i][j] = max(lcs( i , j-1 , s1, s2, dp ), lcs(i-1 , j , s1 , s2 , dp));
          
          
      }
    
    
};