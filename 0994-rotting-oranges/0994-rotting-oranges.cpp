class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
          int n =  grid.size() ; 
          int m = grid[0].size();
         
         
         queue<vector<int>> q ;
          int cntfresh = 0;
        // initially all the  rooten oranges to be added to queue ; 
         for( int i = 0 ; i<n ; i++){
             for( int  j = 0 ; j< m ; j++){
                  if(grid[i][j] == 2){
                      q.push({ i , j , 0});
                       
                  }
                  if(grid[i][j] == 1) cntfresh++;
             }
         }
         int x[]  = {1 , 0 ,-1 ,0};
         int  y[]=  {0 , 1 ,0 , -1 };
         int time = 0 ;
          int flag1 = 0 , flag2= 0;
         while(!q.empty()){
             int sz = q.size();
             flag2 = 0;
             for(int i = 0 ; i<sz ; i++){
              auto vect = q.front();
              q.pop();
              int r = vect[0];
              int c = vect[1];

              for( int i = 0 ; i<4 ; i++){
                 int nrow = r + x[i];
                 int col =  c+ y[i];
                 if( nrow >= 0 && nrow <n && col >= 0 && col < m  && grid[nrow][col] != 0 && grid[nrow][col] != 2){
                     q.push({nrow , col});
                     grid[nrow][col] = 2 ; 
                     flag2 =1;
                     cntfresh--;
                 } 
              }
                         
         }
             if(flag2) flag1++;
             
}        
         
       if(cntfresh) return -1;
        
        return flag1;
        
    }
   
};