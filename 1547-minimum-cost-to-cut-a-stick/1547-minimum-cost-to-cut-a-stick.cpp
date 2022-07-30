class Solution {
public:
    int minCost(int n, vector<int>& cuts) {
       int j = cuts.size();
       cuts.push_back(n); // this will be needed to  compute the length  for the first time ;
       cuts.insert(cuts.begin() , 0); // this too will be neded 
       sort(cuts.begin()  , cuts.end());
       vector<vector<int>> dp( j+1 , vector<int> (j+1 , -1));
      return partition(  1 ,   j  , cuts , dp);
    }
     int partition( int i  , int j, vector<int> & cuts , vector<vector<int>> & dp){
          if( i > j ) return  0 ; 
           
          if(dp[i][j] != -1)  return dp[i][j];
          int ans  = 1e9;
          for(int ind =  i ;ind <= j ;   ind++){
              int   cost =  cuts[j+1] - cuts[i-1] + partition( i , ind-1 , cuts , dp) + partition(  ind+1 , j , cuts , dp);
              ans = min( ans  , cost);
          }
         
           return dp[i][j] = ans ; 
     }
};