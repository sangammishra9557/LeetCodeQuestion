class Solution {
public:
    int rob(vector<int>& nums) {
        
        
     unordered_map<int , int> mp;
         return lootmoney(0 , nums ,mp);
        
    }
      int lootmoney( int ci ,  vector<int> & nums , unordered_map<int , int> &mp){
           if( ci >= nums.size())  return 0 ;
          
            if(mp.find(ci) != mp.end())  return mp[ci];
          
            int consider =   nums[ci] + lootmoney(ci+2 , nums ,mp);
            int notconsider =  lootmoney(ci+1 , nums , mp);
           return   mp[ci] =  max( consider , notconsider);
     }
};