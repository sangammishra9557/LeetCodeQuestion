class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>> memo( coins.size() , vector<int> (amount+1 ,  -1));
      if (mincoin(0 , amount , coins , memo) == 100000000) return -1;
        return mincoin( 0  , amount , coins , memo);
        
    }

    int   mincoin(int currentindex , int amount , vector<int> & coins , vector<vector<int>> & memo  ){
        
        
           if(amount == 0 )
                 return  0 ;
           if(currentindex >= coins.size())  return  100000000;
            
           if(memo[currentindex][amount] != -1) return memo[currentindex][amount];
        
           int notpick = mincoin(currentindex+1 , amount , coins ,memo);
           int pick =   100000000;
           if(amount >= coins[currentindex])
               pick =  1+ mincoin(currentindex , amount - coins[currentindex] , coins ,  memo);
           
            return memo[currentindex][amount] =   min(pick , notpick);
    }
    
    
};