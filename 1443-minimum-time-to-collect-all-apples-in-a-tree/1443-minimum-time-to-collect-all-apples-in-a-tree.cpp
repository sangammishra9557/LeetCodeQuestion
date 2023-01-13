class Solution {
public:
    
     int dfs(int v , int parent , vector<int> adj[], vector<bool> &hasApple){
         
         
          int totaltime = 0 ,childtime  =0; 
          
          for( auto child : adj[v]){
               if (child != parent){
                   childtime = dfs(child , v , adj , hasApple);
                   if(childtime || hasApple[child]) 
                       totaltime += childtime+2;            
               }
          }
         return totaltime;
     }
    
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<int> adj[n];
        for( auto edge : edges){
            int a = edge[0], b= edge[1];
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
      return  dfs(0 ,-1 ,adj, hasApple);
     // kyunkin question mein agr node jo hain woh tree ki form mein represented hain tph    
        
    }
};