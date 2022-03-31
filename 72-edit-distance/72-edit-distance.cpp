class Solution {
public:
    int minDistance(string word1, string word2) {
         int n =  word1.size();
         int m =  word2.size();
          vector<vector<int>>  memo(n , vector<int>(m, -1));
        return minoperation(word1,word2,0 ,0 ,n , m , memo);
    }
    private :
     int minoperation(string &s1 , string&s2 ,  int i , int j , int n , int m , vector<vector<int>> &memo)
     {
         
         if( j>=m)
             return n-i;
         if (i>=n)
             return  m-j;
         if(memo[i][j] != -1)
             return memo[i][j];
         
         int ans = 1000000;
         if(s1[i] == s2[j]){
            ans = minoperation(s1, s2, i+1 , j+1, n , m , memo);
         }
         else 
         {
            int insertions = 1+ minoperation(s1, s2, i , j+1, n, m , memo );
            int deletion  = 1+minoperation(s1, s2 , i+1, j , n , m , memo);
            int replace = 1+ minoperation(s1,s2, i+1, j+1, n , m , memo);
            ans = min({ ans, insertions,deletion, replace});
         }
         return  memo[i][j] = ans;
     }
};