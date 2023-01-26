class Solution {
public:
    bool canPartition(vector<int>& nums) {
        
        int target  = accumulate(nums.begin(),nums.end() , 0);
        if(target % 2  != 0) return false;
        target = target/2;
        int n = nums.size();
        vector<int> prev(target+1 , 0) , curr(target+1,0);
         prev[0] = curr[0] = 1; // this is the base condition  when taregt is zero there may be any number of element
         if(nums[0] <= target) prev[nums[0]] = 1; // this is the base case when there is only one element present and its reach is tillits value ;
        
        for(int i = 1 ; i<n; i++){
            
            for(int tsum = 1 ; tsum <= target ; tsum++){
                
                int nottake = prev[tsum];
                 int take = 0 ; 
                 if(nums[i] <= tsum){
                      take = prev[tsum-nums[i]];
                 }
                curr[tsum] = take|| nottake;
            }
            prev = curr ; 
        }
        return curr[target];
    }
};