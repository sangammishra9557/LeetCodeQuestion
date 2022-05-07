class Solution {
public:
    int dominantIndex(vector<int>& nums) {
          int max =  0; 
          int max2 = 0; 
     
          int maxi2;
           for(int i =0 ; i< nums.size(); i++){
                 if(nums[i] > max2)
                 {max = max2;
                   max2 = nums[i];
                    maxi2 = i ;
                 }
                  else if( nums[i]>max)
                       max = nums[i];
                  
           }
          cout<<max2 <<" "<<max;
            if(max2 >= max*2)
                 return maxi2;
        return -1;
    }
};