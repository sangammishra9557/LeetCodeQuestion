class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
          sort(nums.begin() , nums.end());
        vector<vector<int>> ans ; 
         int n = nums.size();
         for(int i = 0 ; i< n - 2;  i++)
         {  if(  i== 0  || (i>0  && nums[i] != nums[i-1]))
                {   int left =  i+1 ; 
                   int right = n-1;
                   int target = 0 - nums[i];
                    while( left < right){
                         
                        if( nums[left]+ nums[right] ==  target)
                        {
                             vector<int> temp ; 
                            temp.push_back(nums[i]);
                            temp.push_back(nums[left]);
                            temp.push_back(nums[right]);
                            ans.push_back(temp);
                             while(left <right &&  nums[left] == nums[left+1]) left++;
                             while(left< right && nums[right] == nums[right-1]) right--;
                             left++; 
                             right--;
                        }
                         else if ( nums[left] +  nums[right] < target) left++;
                         else right--;
                    }
         }
         }
         return ans;
    }
};