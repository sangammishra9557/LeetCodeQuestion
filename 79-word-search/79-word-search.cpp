class Solution {
    private :
       vector<pair<int , int>>  dirs = {{0 ,1} , {0 , -1} , {1 ,0} , {-1, 0}};
public:
    bool exist(vector<vector<char>>& board, string word) {
        
        int n =  board.size();
        int m =  board[0].size();
         for(int i = 0 ; i< n ; i++)
         {
             for(int j =0 ; j<m ; j++)
             {
                  if(board[i][j] == word[0] && wordSearch( i , j , 0 ,board , word , n , m))
                      return true ;
             }
         }
        
         return false;
    }
    private:
      bool wordSearch(int i , int j , int currentIdx ,  vector<vector<char>> & board , string word , int n , int m ){
          
           if(currentIdx  >= word.size())
                return true ; 
          
           if(i >= n || j >= m || i<0 || j<0 || board[i][j] !=  word[currentIdx])
                return false ; 
           
           
             char temp = board[i][j];
              board[i][j] = '.' ;
              bool found  = false;
             
             for( auto pair : dirs){
                 
                  found |=  wordSearch(i+pair.first ,  j + pair.second , currentIdx+1 ,  board , word , n , m);
             }
          
            board[i][j] = temp;  
            return found ; 
           
    
          
      }
};