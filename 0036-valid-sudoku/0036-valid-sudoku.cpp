class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        
        
        for(int i = 0 ; i<9 ; i++){
            for(int j =0 ; j<9 ; j++){
                if(board[i][j] != '.' && !isvalid(board ,i , j ,board[i][j])) return false;
            }
        }
        return true;
    }
    
    
    bool isvalid(vector<vector<char>> & board , int cr , int cc , int num){
        
        
        
        for(int i =0; i<9 ; i++){
            
            if( i != cr && board[i][cc] == num) return false; 
            
            if(  i != cc && board[cr][i] == num) return false;
            
            int n = (3 * (cr/3) +  i/3);
            int m = ( 3 * (cc/3) + i %3);
            
            if(cr != n && cc != m && board[n][m] == num) return false;
            
            
        }
        
       return true; 
    }
};