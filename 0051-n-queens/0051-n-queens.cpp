class Solution {
public:
    
    
    
    
    
    bool ispossible(int cr , int cc , int n ,vector<string> & board)
        
        {
            
            int r = cr ; 
            int c = cc; 
            
            while( r>= 0 && c <n){
                if(board[r][c] == 'Q') return false;
                r--;
                c++;
            }
             r = cr , c = cc; 
            while( r>=0 && c>=0){
                if(board[r][c] =='Q') return false;
                r--, c--;
            }
            
            
            
            
            // check for the current column; 
            for(int i = cr ; i >=0 ;i--){
                if(board[i][cc] == 'Q') return false;
            }
        
           return true;  
        }   
        
        
    
    void solve(int cr  , int n , vector<vector<string>> & ans, vector<string> &board){
        
        
          if(cr == n){
              ans.push_back(board);
              return;
          }
        
        
        for(int col =0 ; col<n; col++){
            
            if(ispossible(cr , col , n , board)){
                
                board[cr][col] ='Q';
                solve(cr+1  ,n ,ans, board);
                board[cr][col] ='.';
            }
        }
        
    }
    
    
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans; 
        vector<string> board(n,string(n,'.'));
        solve(0 , n,ans, board);
        return ans;
        
    }
};