class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
         int n = matrix.size();
         int m  = matrix[0].size();
        int col = true ; 
         for(int i =0 ; i< n ; i++){
              if(matrix[i][0] ==0 ) col = 0 ;
              for(int j =1 ; j<m ; j++){
                   if(matrix[i][j] == 0)
                         matrix[i][0] =  matrix[0][j] = 0 ;
              }
         }
        
        
        
        for(int i = n-1  ; i>=0 ; i--){
            for(int j = m-1 ; j>= 1 ; j--){
               
                 if(matrix[i][0] == 0 || matrix[0][j] == 0)
                     matrix[i][j] = 0 ;
                
            }
             if( col == 0)  matrix[i][0] = 0;
        }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
//             int rows = matrix.size();
//             int cols= matrix[0].size();
//             int r =1 , col = 1 ;
               
//          print(matrix);
//          cout<<endl<<endl;
//               for(int i =0 ; i<rows;i++ )
//               {
//                    if(matrix[i][0]==0) col = 0 ;
//                //    if(matrix[0][i] ==0) r =0 ;             / yeh line glt hain yhn se apka pura logic glt ho jayega 
//                   for(int j =1; j<cols;j++)
//                   {
//                       if(matrix[i][j] ==0 )
//                            matrix[i][0] = matrix[0][j] = 0 ; 
//                   }
//               }
        
//          print(matrix);
//          cout<<endl;
//          cout<<endl;
//          for(int i = rows -1  ; i>= 0 ;i--)
//          { 
//                for( int j = cols -1 ; j >=1 ; j--)
//                {
//                     if(matrix[i][0] == 0 || matrix[0][j] == 0)
//                         matrix[i][j] = 0;
//                }
//             if(col == 0 ) matrix[i][0] = 0 ;               // yeh wali hi condition chelgi  jb woh   1 hi  col hga  tb bs  andar wala for loop nhin chelga 
//          }
       
             
//        print(matrix);
//     }
//  private :  
//     void print(vector<vector<int>> & matrix){
//           for(int i =0 ; i< matrix.size();i++)
//           {
//                for(int j =0 ; j<matrix[0].size(); j++)
//                {
//                      cout<<matrix[i][j]<<" ";
                   
//                }
//               cout<<endl;
//           }
                
 }
};