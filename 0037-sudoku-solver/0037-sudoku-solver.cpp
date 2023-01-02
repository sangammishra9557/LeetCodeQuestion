class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        
        helper(board);
    }
    
    
    
    bool helper(vector<vector<char>> & board){
        
        
        for( int i = 0 ; i<9 ; i++){
            
            for( int j = 0 ; j<9 ; j++){
                
                if(board[i][j] =='.'){
                    
                    for(char c='1'; c<='9' ; c++){
                        
                        if(isvalid(board , i , j , c)){
                            
                            board[i][j] = c;
                            if(helper(board)) return true;
                            
                            else {
                                board[i][j] = '.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    
    
    
    
    bool isvalid(vector<vector<char>> & board , int cr , int cc  , int num){
  // size hmesha 9 length ka hi hga  
        //khali toh nhin hai yeh check krne ki jrurat nhin hai kyunki yeh toh phle hi ho chuka hai solver function maine
        for(int i = 0 ; i<9 ; i++){
            
            if( board[i][cc] == num) return false;
            
            if(board[cr][i] == num) return false; 
            
            if(board[ 3*(cr/3) + i/3][3*(cc/3) + i%3] == num) return false; 
            
            
        }
        return true;
    }
};