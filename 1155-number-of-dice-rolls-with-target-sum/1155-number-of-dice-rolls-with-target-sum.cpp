class Solution {
public:
     const int mod = 1000000007;
     int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>>  memo(n+1 , vector<int> (target+1 , -1));
         cout<<mod;
         return totalways( n , k , target,memo);
        
    }
    
    private:
    int  totalways( int n , int k  , int target , vector<vector<int>> &memo)
    {  if( n== 0  && target  ==0 ) 
             return 1 ;
          
      if(  target <=0  ||  n ==0 )
              return 0 ;
     
       if(memo[n][target] != -1)
           return memo[n][target];
    
      int  ways = 0;
      int temp = 0;
      for(int i =1 ; i<=k ;i++)
      {  temp =  totalways(n-1, k , target-i,memo) % mod;
         ways = ways% mod;
         ways = (ways %mod  + temp %mod) %mod;
      }  
      return  memo[n][target]= ways;
    }
};