// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {         
         
         vector<int > costs( V , -1);
          set<pair<int ,int>>  st ; 
          int ans = 0 ; 
          st.insert({0 , 0});
          while(st.size() > 0){
                auto val = *st.begin();
                st.erase(st.begin());
                int  wt = val.first;
                int  node = val.second;
                if(costs[node] != -1)
                  continue;
                costs[node] = wt ; 
                ans += wt;
                for(auto child : adj[node]){
                    st.insert({child[1] , child[0]});
                }
                 
          }
           return ans;
    }
};

// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends