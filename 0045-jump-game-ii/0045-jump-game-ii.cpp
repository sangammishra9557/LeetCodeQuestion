class Solution {
public:
    int jump(vector<int>& nums) {
        
      int n = nums.size();
      int max_Reach = 0;
      int  last_max = 0 ; // yeh jo best optimal pick krenge woh max khn tk le jayega 
      int jump = 0;
    for(int i =0 ; i<n-1; i++){
             max_Reach  = max( max_Reach , i+nums[i]);
             if( i== last_max){
                 jump++;
                 last_max = max_Reach;
             }
        }
        return jump;
    }
};