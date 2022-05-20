class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
           int m = obstacleGrid.size();
           int n  = obstacleGrid[0].size();
           vector<vector<int>> memo( m , vector<int> (n,-1));
           return totalways(0, 0 , m , n , memo , obstacleGrid);
    }

    private :
    int totalways(int cr,  int cc , int m , int n, vector<vector<int>> &memo, vector<vector<int>>& obstacleGrid)
    {
         if( cr>= m  || cc>= n || obstacleGrid[cr][cc] == 1) 
             return 0;
         if( cr == m-1 && cc == n-1)
             return 1;
          if(memo[cr][cc] != -1)
             return memo[cr][cc];
        
        int left = 0  , right =0 ;
           left =   totalways(cr+1, cc , m , n , memo , obstacleGrid);
           right =  totalways(cr, cc+1 , m , n , memo , obstacleGrid);
        
        return  memo [cr][cc]= left + right;
        
    }
};