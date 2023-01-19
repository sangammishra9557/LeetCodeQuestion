class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
         vector<int> mp(k,0); 
        int sum  = 0 ; 
        mp[0] = 1;
        int c= 0;
    
         for( int  &i: nums ){
              sum += i ;
              int rem =  ((sum% k )+ k)%k;

              c+= mp[rem];
              mp[rem]++;
             
         }
        return c;
        
    }
};