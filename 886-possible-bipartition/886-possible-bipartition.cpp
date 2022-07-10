class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
         vector<int> adj[n+1] ;
         for(auto edge : dislikes){
              int a = edge[0];
              int b = edge[1];
              adj[a].push_back(b);
              adj[b].push_back(a);
         }
        
        
         vector<int>  color(n+1 , -1);
        
         for(int i = 1 ; i <= n ; i++)
         {
              if(color[i] == -1)
              { if(!bfs( i , adj , color))
                   return false;
               }
         }
        
         return true;
        
    
        
    }
     bool bfs( int  vertex , vector<int>  adj[] , vector<int> & color){
          
          queue<pair<int , int>> q ; 
          q.push({vertex , 0});
          while(!q.empty()){
               
               auto no = q.front();
               q.pop();
                int  node = no.first;
                int  cc = no.second;
                if(color[node] != -1){
                     if(color[node] != cc)
                         return false;
                }
               else{
                    color[node] = cc ;
                    for(auto  neigh : adj[node]){
                         q.push({neigh , 1-cc});
                    }
               }
          }
          
          return true; 
     }
};