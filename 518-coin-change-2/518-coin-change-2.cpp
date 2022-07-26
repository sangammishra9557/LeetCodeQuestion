class Solution {
public:
    int change(int amount, vector<int>& coins) {
         unordered_map<string ,int> mp;
         return totalways( 0 , amount , coins , mp);
    }
    
    
    
     int totalways(int  ci ,  int amount , vector<int> & coins , unordered_map<string ,int> &mp){
          if( amount == 0)  return 1 ; 
          if(ci >= coins.size())  return  0 ; 
         
          string currentkey = to_string(ci)+"-"+to_string(amount);
         if(mp.count(currentkey))  return mp[currentkey];
         
         
          int  notconsider =   totalways(ci+1 ,  amount , coins , mp);
           
          int consider = 0 ;
           if( coins[ci]<= amount)
               consider =  totalways(ci , amount-coins[ci] , coins , mp);
         return mp[currentkey] =  consider +notconsider;
         
     }
};