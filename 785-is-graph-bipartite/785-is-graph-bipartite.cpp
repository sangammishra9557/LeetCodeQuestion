class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n =  graph.size();
        vector<int> color( n , -1);
         for(int i =0 ; i<n ; i++){
              {   if(color[i] == -1)
                     if(!hasEvenCycle( i , 0 , graph , color))
                         return false;
              }
         }
         return true;
    }
    
     bool  hasEvenCycle(int vertex , int currentColor , vector<vector<int>> &graph ,  vector<int> &color){
        if(color[vertex]   !=  -1)
        {
             return color[vertex] == currentColor;
        }
          color[vertex] = currentColor;
         for(int child : graph[vertex]){
              
              if(!hasEvenCycle( child , 1-currentColor ,  graph , color))
                   return false;
         }
         return true;
      
     }
};