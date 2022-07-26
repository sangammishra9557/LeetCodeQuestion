class Solution {
public:
    int change(int amount, vector<int>& coins) {
         vector<vector<int>> mp(coins.size() , vector<int> (amount+1 , -1));
         return totalways( 0 , amount , coins , mp);
    }
    
    
    
     int totalways(int  ci ,  int amount , vector<int> & coins , vector<vector<int>> &mp){
          if( amount == 0)  return 1 ; 
          if(ci >= coins.size())  return  0 ; 
         
         
         if(mp[ci][amount]!=-1)  return mp[ci][amount];
         
         
          int  notconsider =   totalways(ci+1 ,  amount , coins , mp);
           
          int consider = 0 ;
           if( coins[ci]<= amount)
               consider =  totalways(ci , amount-coins[ci] , coins , mp);
         return mp[ci][amount] =  consider +notconsider;
         
     }
};