class Solution {
public:
    int minCost(int n, vector<int>& cuts) {
       int c = cuts.size();
       cuts.push_back(n); // this will be needed to  compute the length  for the first time ;
       cuts.insert(cuts.begin() , 0); // this too will be neded 
       sort(cuts.begin()  , cuts.end());
      //  vector<vector<int>> dp( j+1 , vector<int> (j+1 , -1));
      // return partition(  1 ,   j  , cuts , dp);  // NOW LETS WRITE THE THE TABULATION CODE 
   //   because 2 values are inserted   and the loop will run till j becuase value has been shifted  by inserting the 0  
         // by intializing 0 the base case is satisified also  
        
        vector<vector<int>> dp(c+2 , vector<int> (c+1 , 0));
        
         for( int i = c  ; i>= 1; i--){
              for( int  j  =  1 ; j<= c ;  j++){
                   if( i > j)   continue ; 
                   int mini = INT_MAX;
                    for(int ind =  i  ; ind <= j  ; ind++){
                         int cost =  cuts[j+1] - cuts[i-1] + dp[i][ind-1] + dp[ind+1][ j];
                         mini = min( mini , cost);
                    }
                   dp[i][j] =  mini;
                }
             }
         
          return dp[1][c];
    
   
    }
//      int partition( int i  , int j, vector<int> & cuts , vector<vector<int>> & dp){
//           if( i > j ) return  0 ; 
           
//           if(dp[i][j] != -1)  return dp[i][j];
//           int ans  = 1e9;
//           for(int ind =  i ;ind <= j ;   ind++){
//               int   cost =  cuts[j+1] - cuts[i-1] + partition( i , ind-1 , cuts , dp) + partition(  ind+1 , j , cuts , dp);
//               ans = min( ans  , cost);
//           }
         
//            return dp[i][j] = ans ; 
     
};