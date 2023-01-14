class Solution {
public:
    
    vector<int> dfs(int v , int parent , vector<int> adj[] , string &labels , vector<int>&ans,vector<int>&visited){
        visited[v] = 1;
        
        vector<int> temp(26,0);
        for(auto child : adj[v]){
            
            if(!visited[child]){
               auto t = dfs( child , v , adj, labels,ans,visited);
               for(int i = 0; i<26;i++) temp[i]+= t[i];
            }
        }
        
        temp[labels[v]-'a']++;
        ans[v] = temp[labels[v]-'a'];
        return temp;
        
        
    }
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        //firstly creating the edge
        vector<int> ans(n,0) ; 
        vector<int> adj[n];
        vector<int> visited(n,0);
        for( auto edge : edges){
            int a = edge[0] , b = edge[1];
            adj[a].push_back(b);
            adj[b].push_back(a);

        }
      dfs(0 , -1 , adj, labels ,ans,visited);
    return ans;
        
    }
};