class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int c= 1;
        int ind=0;
        int a = *max_element(nums.begin(),nums.end());
        if(nums.size()==1) return 0;
        for(int i=0;i<nums.size();i++){
            if (a<2*nums[i] and nums[i]!=a) return -1;
            if(nums[i]==a) ind= i;
            
        }
        return ind;

    }
};