// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
         vector<int> visited( V , 0);
           bool  found = false ;
            for(int i = 0 ; i< V ; i++){
                 if(!visited[i])
                     {
                          if(dfs( i , adj , visited  , -1))  return true ;
                     }
                 
            }
            
                
              
              return false;
    }
    bool dfs(int vertex ,  vector<int> adj[],  vector<int> & visited ,  int parent ){
        visited[vertex] = true ; 
        
         for( int neigh :  adj[vertex]){
              if(!visited[neigh] )
                {
                       if(dfs(neigh , adj , visited , vertex))
                         return true;
                }
                    
               else if (neigh != parent)
                     return true ;
         }
          return false; 
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends