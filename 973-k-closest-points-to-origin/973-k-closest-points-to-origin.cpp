class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans ; 
        priority_queue<pair<int , vector<int>>> pq ; 
         for(auto &  point : points){
             int x = point[0]* point[0];
             int y = point[1]*point[1];
              cout<<x+y<<" ";
             pq.push({x+y , point});
             if(pq.size()>k) pq.pop();
         }
        
         while(pq.size()>0){
             auto node  = pq.top().second;
             pq.pop();
             ans.push_back(node);
         }
      return ans;
    }
};