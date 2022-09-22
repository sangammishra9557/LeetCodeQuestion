class Solution {
public:
    void sortColors(vector<int>& nums) {
        
            int n = nums.size()-1;
             int low = 0 ; int mid = 0 , high =n ; 
             
        
                     while( mid <= high){
                         
                          if(nums[mid] == 0){
                               swap(nums[mid ] , nums[low]);
                               low++;
                                mid++;
                          }
                         else if( nums[mid] ==1)  mid++;
                         else {
                              swap(nums[mid] , nums[high]);
                              high--;
                         }
                     }
    }
     private:
       void  print(vector<int> & nums){
             for( auto it : nums )
                  cout<<it<<" ";
            cout<<endl;
        }
};