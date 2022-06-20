class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
         vector<int> indegree(n+1, 0);
         vector<int> outdegree(n+1, 0);
        
         for(auto people :  trust){
              int people1 = people[0];
              int people2 = people[1];
              indegree[people2]++;
              outdegree[people1]++;
         }
         for(int i = 1 ; i < n+1 ; i++){
              if(indegree[i] == n-1 and outdegree[i] == 0)
                   return i ;
         }
         return -1;
        
    }
};