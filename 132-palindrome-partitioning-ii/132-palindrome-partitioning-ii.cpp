class Solution {
public:
    int minCut(string s) {
         int n = s.size();
        vector<vector<int>> memo(n+1, vector<int>(n+1,-1));
         return minimumCuts(s, 0 , s.size()-1 , memo);
        
    }
 private :
     int  minimumCuts( string &s , int start , int end , vector<vector<int>> & memo)
     {
          if(ispalindrome(s,start , end) or  start >=end)
              return 0 ; 
         if(memo[start][end] != -1)
         { cout<<"hello"; 
             return  memo[start][end];
         }
         int ans = INT_MAX;
         for( int  i = start ; i<end; i++)
           {
                if(ispalindrome(s,start , i))
                {
                     int temp = 1+ minimumCuts( s,i+1,end , memo);
                     ans = min(temp,ans);
                }
           }
        return  memo[start][end] = ans;  
     }
     bool ispalindrome(string &s, int start, int end)
     {   
          while(start<end)
          { 
                if(s[start] != s[end])
                    return false;
              start++;
              end--;
          }
          return true;
         
     }
};