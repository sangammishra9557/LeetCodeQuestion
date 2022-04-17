class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
         vector<vector<int>> matrix(n , vector<int> (n , 0));
        Spiral(matrix , n);
         return matrix;
    }
    
 private:
       void  Spiral(vector<vector<int>> & matrix , int n ){
          int r =   n;
          int c =  n ;
          int  k = 0 ; 
          int  l = 0 ; 
            int temp = 1; 
          
            while( k< r  &&  l <c  && temp <= n*n){
                       
               for( int i = l ;  i<c ;i++){
                 matrix[k][i] = temp++;
               } 
               k++;
               
                for(int  i = k ; i< r ;i++){
                    matrix[i][c-1] = temp++;
                }
               c--;
               
         if(k<r)
            { 
                for( int i = c -1 ; i>= l ;i--){
                    matrix[r-1][i] = temp++;
                }
                r--;
            }
               
               
            if(l<c)    
              {for(int i = r-1 ; i>= k ;i--){
                matrix[i][l] = temp++ ;
                }
                l++;
               }
           }
     }
};