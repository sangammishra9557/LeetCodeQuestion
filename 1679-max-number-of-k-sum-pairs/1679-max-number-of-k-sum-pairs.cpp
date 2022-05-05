class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
          unordered_map<int,int> mp; 
         
           for(auto & it : nums){
               mp[it]++;
           }
            int count = 0 ; 
           for( int i =0 ; i < nums.size(); i++)
           {  
                if( mp[nums[i]] > 0){
                    
                    mp[nums[i]]-- ; 
                     if(mp.find( k - nums[i]) != mp.end() && mp[k-nums[i]] > 0 )
                     {
                          mp[k-nums[i]]--;
                          count++;
                     }
                }
               
           }
         return count;
    }
};