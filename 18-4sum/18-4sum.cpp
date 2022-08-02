class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>   ans ; 
        
         sort(nums.begin(),nums.end())   ;
          if(nums.size() == 0)   return ans ; 
           int n = nums.size();
           for( int i = 0 ; i< n ; i++){
               
                for(int j = i +1  ; j<n ; j++){
                    
                    long long   rem = (long)(long)target -  nums[i]- nums[j];
                    int left =   j+1 ; 
                    int right = n-1 ; 
                    while( left< right){
                        int sum = nums[left] + nums[right];
                        if( sum  < rem)  left++;
                        else if(sum > rem)  right--;
                        else{
                               vector<int> temp  ( 4 , 0);
                                 temp[0] =  nums[i];
                                 temp[1] = nums[j];
                                 temp[2] = nums[left];
                                 temp[3] = nums[right];
                                 ans.push_back(temp);
                                while( left < right  &&  temp[2] == nums[left])  left++;
                                while( left < right && nums[right] == temp[3])  right--;
                         }
                    }
                     while( j+1< n  && nums[j+1] == nums[j]) j++;
                    
                }
                 while( i+1 < n && nums[i+1] == nums[i])  i++;
           }
          return ans ; 
        
    }
};