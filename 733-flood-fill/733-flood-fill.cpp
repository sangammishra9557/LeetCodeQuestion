class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        
        
        
        if (image[sr][sc] != color)
             dfs(sr,sc,image[sr][sc]  , color , image);
    
        
        
        return image;
    }
    
    
    
     void dfs( int i , int j  ,  int initialcolor , int newcolor , vector<vector<int>>& image){
         
          int n = image.size();
          int m = image[0].size();
          
         
         if( i < 0  || i >= n  || j < 0 ||  j >= m    || image[i][j] != initialcolor ){
               return ;
         }
         
         image[i][j] = newcolor;
          dfs( i-1 , j , initialcolor , newcolor, image);
          dfs(i, j-1 ,initialcolor , newcolor , image);
          dfs(i+1 , j, initialcolor , newcolor , image);
          dfs( i ,j+1, initialcolor  , newcolor  , image);
         
         
     }
};