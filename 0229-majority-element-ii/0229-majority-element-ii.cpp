class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
          int n = nums.size();
        int ele = INT_MIN , ele1 = INT_MIN;
         int c = 0 , c1 = 0;
        for(int i =0; i<n; i++){
            if( nums[i]  == ele)c++;
            
            else if( nums[i] == ele1) c1++;
            
             else  if( c == 0){
                 ele = nums[i];
                c = 1;
            }
            else if (c1 == 0) {
                 ele1 = nums[i] ; 
                 c1 =1 ;
            }
            
            else{
                 c--;
                 c1--;
            }
        }
         
            vector<int> ans;
           int f1 = count(nums.begin() , nums.end() , ele);
           int f2 = count(nums.begin() , nums.end() , ele1);
            
            if(f1 > (n/3)) ans.push_back(ele);
            if(f2 > (n/3)) ans.push_back(ele1);
        return ans; 
    }
        
};