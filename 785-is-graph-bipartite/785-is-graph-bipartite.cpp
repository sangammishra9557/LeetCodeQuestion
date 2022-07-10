class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        
         int n = graph.size();
         vector<int>   color(n , -1);
         for(int i =0 ; i< n ; i++){
              
              if(color[i] == -1){
                   if(!bfsevencycle(i , graph , color))
                       return false;
              }
         }
         return true;
    }
    bool bfsevencycle(int vertex , vector<vector<int>> & graph , vector<int> &color){
         int n = graph.size();
         queue<pair<int,int>> q ; 
         q.push({vertex , 0});
              while(!q.empty()){
                  auto pr = q.front();
                   q.pop();
                  int node = pr.first;
                  int cc = pr.second;
                  if(color[node] != -1){
                      if(color[node] != cc)
                          return false;
                  }
                  else{
                      color[node] = cc;
                      for(int  neigh : graph[node]){
                           
                          q.push({neigh , 1-cc});
                          
                      }
                  }
                  
                  
                  
                  cout<<endl;
              }
         return true;
         }
};