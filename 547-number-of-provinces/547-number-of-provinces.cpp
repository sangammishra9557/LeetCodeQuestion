class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
         // this question is vartiation of connected componets in the graph and the vallue present here are  in adjaceny matrix
         int vertices = isConnected.size();
          int answer  =  0 ; 
          vector<int> visited(vertices,0);
           for(int i = 0 ;i<vertices;i++){
                if(!visited[i])
                {  bfs(i , isConnected , visited);
                  answer++;
                }
           }
         return answer;
        
        
    }
     private :
        void dfs(int currentcity ,vector<vector<int>> & matrix ,  vector<int>  &visited  ){
             if(visited[currentcity])
                 return ; 
              visited[currentcity] = true ;
             
             for( int i = 0 ; i<  matrix[currentcity].size(); i++){
                      if(matrix[currentcity][i] == 1)
                           dfs(i , matrix , visited);
                 }
              
        }
      void bfs (int src, vector<vector<int>> & matrix  ,  vector<int> & visited)
      {
           queue<int>  q; 
           q.push(src);
           visited[src] = 1;
           while(!q.empty()){
                int currentcity =  q.front();
                q.pop();
                for( int i =0 ; i < matrix[currentcity].size() ; i++){
                     if(matrix[currentcity][i] ==1  &&   !visited[i])
                         q.push(i) , visited[i] = 1;
                          
                }
           }
          
    
      }
};