class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      sort(nums1.begin(), nums1.end());
      sort(nums2.begin(), nums2.end());
       int s1 = nums1.size();
       int s2 = nums2.size();
       int i =0  , j = 0 ; 
         vector<int> ans ;
        while( i< s1  &&  j < s2)
        {
             if(nums1[i]<nums2[j]) i++;
             else if( nums1[i]> nums2[j]) j++;
             else 
              {   int left =  nums1[i];
                  int right = nums2[j];
                 ans.push_back(nums1[i]);
                while(   i< s1 && left == nums1[i]) i++;
                 while(  j < s2 && right == nums2[j] )j++;
                    
              }
            
        }
         return ans;
    
        
        
    }
};