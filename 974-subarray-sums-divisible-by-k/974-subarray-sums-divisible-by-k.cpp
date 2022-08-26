class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int ,int> mp ; 
        int sum  = 0 ; 
        mp[0] = 1;
        int c= 0;
    
         for( int  &i: nums ){
              sum += i ;
              int rem =  ((sum% k )+ k)%k;
            
              if(mp.count(rem)) c+= mp[rem];
              mp[rem]++;
             
         }
        return c;
        
    }
};