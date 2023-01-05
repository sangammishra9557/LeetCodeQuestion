class Solution {
public:
    
    
    bool ispossible(int cr , int cc , int n , vector<string> &board){
        
        
        
         int r = cr , c =cc ; 
          
         while( r>=0 && c >= 0){
              
             if(board[r][c] == 'Q') return false;
             r--, c--;
         }
        
         r = cr , c =cc ; 
         while( r>=0 && c <n){
             if(board[r][c] =='Q') return false; 
             r--, c++;
         }
        
         r = cr , c= cc;
         while( r>= 0){
             
             if(board[r][c]=='Q') return false; 
             r--;
             
             
         }
        
        return true;
        
        
        
    }
    
    
    
    
    
    
    
    int solve( int cr , int n , vector<string> & board){
        
        
        if(cr == n){
     
            return 1 ;
        }
        
        
        int count  = 0;
        for( int col = 0; col<n ; col++){
            
            if(ispossible(cr ,col , n , board))
            {
                board[cr][col] = 'Q';
                count += solve(cr+1 , n,board);
                board[cr][col] ='.';
            }    
        }
          return count;
    }
    
    
    
    
    
    
    int totalNQueens(int n) {
    
    vector<string>board(n, string(n, '.'));
    return solve(0, n ,board); 
        
        
        
        
        
        
    }
};