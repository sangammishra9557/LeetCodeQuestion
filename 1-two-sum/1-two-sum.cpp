class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     unordered_map< int , int> hash ;
          vector< int> result ;
           for (int i =0; i <nums.size();i++){
                int n= target - nums[i];
                 if( hash.find(n) != hash.end()){
                      result.emplace_back(hash[n]);
                      result.emplace_back(i);
                      return result;
                 }
               
        
               
               hash[ nums[i]]= i;
               
           }
         return result;
        
    }
};