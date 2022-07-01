// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
       vector<int>  visited(V , 0 );
       vector<int>  rstack(V , 0 );
       
        for(int  i =0 ; i< V ; i++)
          {
               if(!visited[i])
                {
                     if(dfscycle( i , adj , visited , rstack))
                       return true ;
                }
                
          }
           return false;
    }
     bool dfscycle(int v ,  vector<int> adj[] , vector<int> & visited  , vector<int> & rstack){
         
          visited[v] = 1 ; 
          rstack [v] = 1 ; 
         
          for( auto neigh  : adj[v]){
            if(!visited[neigh] )
              {
                   if (dfscycle( neigh , adj , visited ,rstack))
                     return true ; 
              }
              
             else if (rstack[neigh])  return true ;
          }
          rstack[v] = 0 ;
           return false;
     }
    
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends