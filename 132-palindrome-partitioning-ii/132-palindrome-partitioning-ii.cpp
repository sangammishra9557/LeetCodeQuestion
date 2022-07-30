class Solution {
public:
    int minCut(string s) {
        
           vector<int>  dp(s.size()  , -1);
         return minimumCuts( 0 , s.size()-1 , s , dp);
    }
      int minimumCuts( int i , int end  , string &s  , vector<int> &dp ){
         
         
          if(ispalindrome( i ,  end , s))  return 0 ;
          
           if(dp[i] != -1)  return dp[i];
          
          
          
          int mini = INT_MAX; // if this neeche wala lopp upr end -1 smghke    neeche eqiual to end chlaya hta toh last ans -1  return krna pdta kyunki woh last character pe bhi jodke dedea 1 ans 
           for(int start = i  ;  start  < end ; start++){
                
                if(ispalindrome(  i , start  ,s)){
                    
                     int cost = 1+  minimumCuts( start+1  , end , s , dp);
                      mini = min(mini , cost);
                }
               
           }
         
         return dp[i] = mini ;
         
         
     }
    
     bool ispalindrome( int i , int j , string &s ){
          
          while( i< j){
               if(s[i]  != s[j])  return false;
              
                i++ ; 
                j--;
          }
         
           return true ;
     }
};