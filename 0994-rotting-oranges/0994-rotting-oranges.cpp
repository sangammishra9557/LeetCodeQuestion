class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
          int n =  grid.size() ; 
          int m = grid[0].size();
          vector<vector<int>> visited( n , vector<int> ( m , 0));
         
         queue<vector<int>> q ;
        // initially all the  rooten oranges to be added to queue ; 
         for( int i = 0 ; i<n ; i++){
             for( int  j = 0 ; j< m ; j++){
                  if(grid[i][j] == 2){
                      q.push({ i , j , 0});
                      visited[i][j] = 2; 
                  }
             }
         }
         int x[]  = {1 , 0 ,-1 ,0};
         int  y[]=  {0 , 1 ,0 , -1 };
         int time = 0 ;
       
         while(!q.empty()){
              auto vect = q.front();
              q.pop();
              int r = vect[0];
              int c = vect[1];
          
              int ct = vect[2];
              time  = max(time , ct);
             
              for( int i = 0 ; i<4 ; i++){
                  if(check(r+x[i] ,c+ y[i] , n , m , grid)){
                      if(visited[r+x[i]][c+y[i]] ==2) continue;
                      visited[r+x[i]][c+y[i]] =  2 ; 
                      q.push({ r+x[i] , c+y[i]  , ct+1});
                      
                  }
              }
             
             
         }
         
        for( int i =0 ; i<n ; i++){
            for( int j = 0 ; j< m ; j++)
            { if(grid[i][j] == 1 && visited[i][j] != 2) return -1;
            }
        }
        return time;
        
    }
    bool check( int r , int c, int n ,  int m , vector<vector<int>> & grid){
        if( r < 0 || c< 0 || r >= n || c >=m ||  grid[r][c] == 0 || grid[r][c] == 2 ) return  false ; 
        
        return true;
        
    }
    
};