class Solution {
public:
    
    
    vector<vector<int>> dirs = {{-1,0},{1,0},{0,-1},{0,1}};
    bool exist(vector<vector<char>>& board, string word) {
        
        int n = board.size();
        int m = board[0].size();
        for(int i =0; i<n; i++){
            for(int j = 0 ; j<m ; j++){
                if(word[0] == board[i][j]){
                    if(ispossible(0 ,i, j, word,board,n,m)) return true;
                }
            }
        }
        
     return false;   
    }
        bool ispossible(int idx , int cr , int cc ,string word ,vector<vector<char>>&board,int n,int m){
            
            if(word.size() == idx) return true;
            
           if( cr<0 || cc<0 || cr >= n || cc>=m || board[cr][cc] != word[idx]) return false;
            char temp = board[cr][cc];
            board[cr][cc]='.';
                
            for(int i = 0; i<dirs.size();i++){
                
                if(ispossible(idx+1 ,cr+ dirs[i][0] , cc+ dirs[i][1] , word , board , n , m)) return true;
            }
            board[cr][cc] = temp;
            return false;
            
            
            
            
            
            
            
               
        
    }
};