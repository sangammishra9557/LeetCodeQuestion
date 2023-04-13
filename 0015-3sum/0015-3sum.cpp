class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      vector<vector<int>> ans ; 
      sort(nums.begin(), nums.end());
      int n = nums.size();
      for(int i = 0 ; i <nums.size() ; i++){
          // if( i== 0 || nums[i] != nums[i-1]){
             int l = i+1 , h = n-1;
             int tar = -nums[i];
             while( l < h ){
                 
                  if(nums[l] + nums[h] == tar){
                       ans.push_back({nums[i] , nums[l] ,  nums[h]});
                       while(l < h && nums[l] == nums[l+1])l++;
                       while(l< h && nums[h] == nums[h-1]) h--;
                       l++ , h--;
                  }
                  else if (nums[l]+ nums[h] > tar ) h--;
                   else l++;
             }
          while( i <n-1 && nums[i] == nums[i+1]) i++; // either this or the the above
           // }
      }
        return ans;
        
        
        
    }
};