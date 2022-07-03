class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& courses) {
        vector<int> ans ;
         vector<int> adj[n];
            for(auto vect : courses){
                adj[vect[0]].push_back(vect[1]);
            }
         vector<int>  indegree(n , 0);
         vector<int>  visited( n , 0);
          
          for(auto vect :  courses){
             indegree[vect[1]]++;
          }
         
    
          for( auto it : indegree) cout <<it<<" ";
    
        
    queue<int> q ; 
          for(int i = 0 ; i< n ; i++)  if( indegree[i] == 0)  q.push(i);
           
        
           int flag = 0 ; 
        
        
           while(!q.empty()){
                int  node = q.front();
                 q.pop();
                 if(visited[node]) continue ; 
                  visited[node] = true ; 
                   ans.push_back(node);
                 for( int neigh :  adj[node]){
                       if(--indegree[neigh] == 0) q.push(neigh);
                       
                 }
                
           }
         reverse(ans.begin() , ans.end());
         if(ans.size() == n)  return ans;
         ans.clear();
          return ans;
         
    }
        
    
};