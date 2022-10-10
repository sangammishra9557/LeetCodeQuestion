class Solution {
public:
     
      void dfs(int v  , int par ,  vector<int> adj[] , vector<int> & visited  , vector<int> & distime , vector<int> & lowtime , int &timer , vector<vector<int>> &ans){
          
          visited[v] = 1 ; 
          
          lowtime[v] = distime[v] = timer++;
          
          for(auto child : adj[v]){
              if (child == par) continue ;
              
              if(!visited[child])
              {
                   dfs(child , v , adj , visited , distime , lowtime , timer , ans);
                  lowtime[v] = min(lowtime[v] , lowtime[child]);

                   if(lowtime[child] > distime[v])
                       ans.push_back({v , child});
                  
                  
              }
              else {
                  lowtime[v] = min(lowtime[v] , distime[child]);
              }
          }
          
          
          
      }
    
    
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        
         vector<vector<int>> ans ;
           vector<int> adj[n];
           for(auto edge : connections){
               int pointa = edge[0];
               int pointb = edge[1];
               adj[pointa].push_back(pointb);
               adj[pointb].push_back(pointa);
           }
         int timer = 0 ; 
         vector<int> visited(n , 0);
         vector<int> distime(n , 0);
         vector<int> lowtime(n , 0);
         for(int i =0 ; i<n ; i++){
              if(!visited[i])
                  dfs(i ,  -1 , adj , visited , distime , lowtime , timer , ans);
         }
         return ans ; 
         
        
         }
        
    };