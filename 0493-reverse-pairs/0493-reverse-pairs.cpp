class Solution {
public:
     void merge( vector<int> &nums , int low, int middle ,  int high , int&cnt){
          int right  = middle+1;
          for(int i = low ;i<= middle ; i++){
              
               while( right <= high && nums[i] > 2* (long)(long) nums[right]){
                   right++;
               }
               cnt+=  right- (middle+1);
          }
         
         
         
         
         
         
         int l = low ; 
          int k = middle+1;
          
          int j = 0;
          vector<int> arr;
          while(l<= middle  && k <= high){
                 if(nums[l] <= nums[k]) 
                 {
                     arr.push_back (nums[l++]);
                
                 }
                 else {
                     arr.push_back(nums[k++]);

                 }
          }
         
           while( l <=middle) arr.push_back(nums[l++]);
            
           while( k <= high)  arr.push_back(nums[k++]);
        
               // yhn pe carefull rehna yeh glti kbhi mtlb krna low++ ko age bdha rhe the ar  usi ko size mein use krrhe the tum 
         j= 0;       
         for( int i = low ; i<=high ; i++){
                    nums[i] = arr[j++];
                }
     }
    
    
     void mergesort(vector<int>&nums , int low , int high , int &cnt){
         
          if(low>= high) return ; 
           int mid = (low + high)/2;
           mergesort(nums , low , mid, cnt);
           mergesort(nums , mid+1 , high , cnt);
           merge(nums , low , mid , high , cnt);
         
         
         
     }
    int reversePairs(vector<int>& nums) {
          int n = nums.size(); 
          int cnt = 0 ; 
           mergesort(nums , 0 , n-1 , cnt);
            for( auto it : nums) cout <<it<<" ";
             cout<<endl;
           return cnt;
    }
};