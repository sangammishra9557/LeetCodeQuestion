class Solution {
public:
    void nextPermutation(vector<int>& nums) {
         int n = nums.size();
          int idx1 = -1;
        // yhn ap second last element se search kr kte ho ar milte hi break kr do 
         for(int i = 0 ; i<n-1 ; i++){
              if(nums[i] < nums[i+1]) idx1 = i;
         }
        
         if(idx1 == -1) 
         {reverse(nums.begin() , nums.end());
          return;
         }
        
        //now find the idx just greater from break  since after break point all numbers wll be decreasing so search from the back
         // same below wale llop mein last se search krna start kro ar just greater milter hi break kr do ;
       int idx2 = 0;
        for(int i = idx1+1 ; i<n; i++){
            if(nums[i] > nums[idx1]) idx2 = i;
        }
         swap(nums[idx1] , nums[idx2]);
         reverse(nums.begin() + idx1 +1 , nums.end());
        
               
    
    }
};