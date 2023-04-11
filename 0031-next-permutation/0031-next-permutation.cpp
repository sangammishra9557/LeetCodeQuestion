class Solution {
public:
    void nextPermutation(vector<int>& nums) {
         int n = nums.size();
          int idx1 = -1;
        
         for(int i = 0 ; i<n-1 ; i++){
              if(nums[i] < nums[i+1]) idx1 = i;
         }
        
         if(idx1 == -1) 
         {reverse(nums.begin() , nums.end());
          return;
         }
        
        //now find the idx just greater from break  since after break point all numbers wll be decreasing so search from the back
        
       int idx2 = 0;
        for(int i = idx1+1 ; i<n; i++){
            if(nums[i] > nums[idx1]) idx2 = i;
        }
         swap(nums[idx1] , nums[idx2]);
         reverse(nums.begin() + idx1 +1 , nums.end());
        
               
    
    }
};