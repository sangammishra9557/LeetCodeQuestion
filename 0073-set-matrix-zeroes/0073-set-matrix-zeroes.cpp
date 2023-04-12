class Solution {
public:
 // BRUTEFORCE SOLTUION   int n  = matrix.size();
//          int m = matrix[0].size();
//          vector<int> rows(n ,1);
//          vector<int> cols(m, 1);
//          for(int i = 0 ; i<n ; i++){
//              for(int j = 0 ; j<m ; j++){
//                  if(matrix[i][j] == 0) rows[i] = 0 ,cols[j] = 0;
//              }
//          }
      
        
//         for(int i= 0 ;i<n; i++){
//             if(rows[i] == 0) {
//                 cout<<i;
//                 for(int j = 0 ; j<m;j++) matrix[i][j] = 0;
//             }
//         }
//         for(int i = 0 ; i<m ; i++){
//             if(cols[i] == 0){
//                 for(int j = 0 ; j<n ; j++){
//                     matrix[j][i] = 0;
//                 }
//             }
//         }
    void setZeroes(vector<vector<int>>& matrix) {
         int n = matrix.size(); 
         int m = matrix[0].size();
          
          int col = 1 ; 
          for(int i =0 ; i<n; i++){
              if(matrix[i][0] == 0) col = 0;
              for(int j = 1 ; j<m ;j++){
                  if(matrix[i][j] == 0) matrix[i][0] = 0 , matrix[0][j] = 0;
              }
          }
      
         
         // start filling the array now ; 
        
         for(int i = n-1 ; i>= 0 ; i--){
             
             for(int j = m-1 ; j>= 1 ; j--){
                 
                  if(matrix[i][0] == 0 || matrix[0][j] == 0) matrix[i][j] =0;
             }
             
              if(col == 0) matrix[i][0] = 0;
         }
    
    }
};