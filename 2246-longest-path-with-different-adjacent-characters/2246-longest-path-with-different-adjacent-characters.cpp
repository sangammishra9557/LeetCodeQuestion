class Solution {
public:
    
    
    int dfs(int v , int parent , string &s, int &ans ,vector<int> adj[]){
        
        int m1= 0 , m2 = 0 ; 
        for( auto  &child : adj[v]){
          
                int temp = dfs(child,v , s, ans,adj);
            
                if(s[v] == s[child]) continue;
                
                if(temp > m1) m2 = m1, m1 = temp;
                else if(temp> m2 ) m2 = temp ;

        }
            ans = max(ans, 1+m1+m2);
            
            return(m1+1);
        }
        
        
    
    int longestPath(vector<int>& parent, string s) {
       int n = parent.size();
       int ans = 0;
       vector<int> adj[n];
        for(int i =1; i<n ; i++){
            adj[parent[i]].push_back(i);
        }
       dfs(0,-1,s,ans,adj);
   
        return ans;
    }
};