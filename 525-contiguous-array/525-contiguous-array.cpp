class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int , int> mp; 
        int sum  , answer = 0;
        mp[0] = -1;
         for(int i =0 ; i<n ; i++){
             if(nums[i] == 1) sum += nums[i];
             else sum+= -1;
             if(mp.count(sum)) answer = max(answer , i-mp[sum]);
             else mp[sum] = i;
         }
  return answer;
    }
};