class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
     //  unordered_map<int ,  int> mp;
     //   int sum = 0 ;
     //   int c= 0 ;
     //  for(auto i : nums){
     //       sum = sum+ i ; 
     //       if( sum == k) c++; // yhn pe yeh condition ki jgah pe  upr hi mp[0] = 1;  assign kr skte ho 
     //       if(mp.find(sum-k) != mp.end()){
     //         c+=  mp[sum-k];
     //       }
     //      mp[sum]++;
     //  }
     // return c;   
        
        
        unordered_map<int, int> mp ; 
        mp[0] = 1; 
         int sum = 0 ; 
         int ans = 0;
        for(int &i : nums){
            sum+= i;
            if(mp.count(sum-k)) ans+= mp[sum-k];
            mp[sum]++;
        }
        return ans;
    }
};