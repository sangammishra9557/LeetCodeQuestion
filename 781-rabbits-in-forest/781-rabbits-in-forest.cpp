class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int, int> mp ; 
         for( int & i : answers){
             mp[i]++;
         }
         int ans = 0;
          for( auto & pair  : mp ){
              int gsize = pair.first+1;
              int  groups =   ceil((pair.second)*1.0 / gsize);
              
              ans+= gsize *groups; 
          }

        
        
        return ans;
        
        
        
    }
};