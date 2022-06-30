class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        
        
    int n = grid.size();
    int m = grid[0].size();
    shrinkIsland(grid);
    printMatrix(grid);
    int answer = 0 ; 
    for(int i =0 ; i<n ; i++)
    {
        for(int j =0 ; j < m ; j++)
        {
             if(grid[i][j] == 0)
                   answer++ , dfs(i ,j , grid , n , m);
                  
        }
    }
         
        return answer; 
    }
    
     void shrinkIsland(vector<vector<int>> & grid){
         
         
        int n = grid.size();
        int m = grid[0].size();
         for(int i =0 ; i< n ; i++)
         {
              for(int j =0 ; j < m ; j++){
                   
                   if( i == 0 || j == 0 || i == n-1 || j == m-1){
                        
                        if (grid[i][j] == 0) 
                            dfs( i , j ,  grid , n , m);
                   }
              }
         }
     }
     void  dfs ( int i , int j ,vector<vector<int>> & grid ,  int n , int m ){
         
         if ( i >= n || j >= m || i<0 || j <0 || grid[i][j] ==  1)
             return ;
         grid[i][j] = 1 ; 
          dfs(i , j+1 , grid, n , m );
          dfs(i , j-1 , grid , n  , m);
          dfs(i-1 , j , grid , n , m );
          dfs(i+1 , j , grid , n , m);
        
    }
     void printMatrix(vector<vector<int>> & matrix){
           for(int i =0 ; i < matrix.size() ; i++)
           {
                for(int j =0 ; j<matrix[0].size() ; j++){
                      cout <<matrix[i][j]<<" ";
                }
                cout<<endl;
           }
         
     }
    
    
    
};