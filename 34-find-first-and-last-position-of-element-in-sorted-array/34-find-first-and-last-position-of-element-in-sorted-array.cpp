class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
            
         int start = 0 ; 
         int end = nums.size() -1;
        vector<int>  ans(2,-1);
        ans[0] = leftPosition(nums , target);
        ans[1] = rightPosition(nums ,target);
         return ans ;
         
 
    }
    private :
     int  leftPosition(vector<int> & nums , int target){
          int pos = -1 ;
          int start = 0 ;
          int end = nums.size()-1 ;
           
         while( start <= end){
                int mid =   start + (end-start)/2;
               
                if(nums[mid] > target)
                     end = mid-1;
                
                else if(nums[mid] < target )
                     start = mid+1;
                 
                 else 
                     pos = mid ,  end = mid-1;
                      
               
           }
          return pos ;
     }
     int rightPosition(vector<int> & nums , int target){
          int pos = -1 ; 
          int  start = 0 ; 
          int end = nums.size()-1;
          
          while( start <= end){
              
               int mid = start + (end-start)/2;
               
               if(nums[mid] > target)
                    end = mid-1;
              
               else if(nums[mid] < target )
                     start = mid+1;
               else 
                      pos = mid ,   start = mid+1;
          }
           return pos;
     }
};