class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        
        //  here the edge case is present  and that needed to b handle 
      unordered_map<int,int> mp ; 
     // In this map we are going to store is key as EDGE and frequence how much time 
        int maxi = 0;
         for( auto & it :wall){
              int n = it.size();
              int edge = 0 ; 
              for(int i =0 ; i<n-1 ; i++){
                  edge = edge+it[i];
                  mp[edge]++;
                  maxi = max(mp[edge] , maxi);
                 
              }
         }
         for( auto & pair : mp ){
              cout<<pair.first<<" "<<pair.second<<endl;
         }
    
      return wall.size()-maxi;
    }
};