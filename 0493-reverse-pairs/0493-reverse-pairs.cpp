// class Solution {
// public:
   
//      void merge(vector<int> & nums , int low , int middle , int high){
        
//           int l = low ; 
//           int k = middle+1;
//           int temp[high-low+1] ; 
//           int j = 0;
//           while(l<= middle  && k <= high){
//                  if(nums[l] <= nums[k]) 
//                  {
//                      temp[j++] = nums[l++];
                
//                  }
//                  else {
//                      temp[j++]=nums[k++];

//                  }
//           }
         
//            while( l <=middle) temp[j++] =nums[l++];
            
//            while( k <= high) temp[j++] = nums[k++];
        
//                // yhn pe carefull rehna yeh glti kbhi mtlb krna low++ ko age bdha rhe the ar  usi ko size mein use krrhe the tum 
//                 j = low;
//               for(int i = 0 ; i<high-low+1 ; i++){
//                    nums[j++] = temp[i];
//               }
        
//      }
//     int  count_pair(vector<int> &nums , int low , int mid, int high){
//         int cnt = 0;
       
//          int right = mid+1;
//         for(int i = low ; i<= mid ; i++){
            
//              while(right<= high && nums[i] > 2* (long)nums[right]){
//                  right++;
//              }
//              cnt += (right-(mid+1));// yhn pe bhi care full rehna ke jrurat hai lala;
//         }
//         cout<<cnt;
//         return cnt;
//     }
//       int mergesort(vector<int> & nums, int low , int high){
//          int cnt = 0;
//            if(low >= high)  return cnt;
//             int mid = low + (high-low)/2;
//            cnt+= mergesort(nums, 0 , mid);
//            cnt += mergesort(nums ,mid+1, high);
//             cnt +=count_pair(nums,low , mid, high);
//             merge( nums , low , mid , high);
// return cnt;
//       }
      
//     int reversePairs(vector<int>& nums) {
//          int n = nums.size();
//        return mergesort(nums,0,n-1);
//     }
// };


class Solution {
private: 
    void merge(vector<int>& nums, int low, int mid, int high, int& reversePairsCount){
        int j = mid+1;
        for(int i=low; i<=mid; i++){
            while(j<=high && nums[i] > 2*(long long)nums[j]){
                j++;
            }
            reversePairsCount += j-(mid+1);
        }
        int size = high-low+1;
        vector<int> temp(size, 0);
        int left = low, right = mid+1, k=0;
        while(left<=mid && right<=high){
            if(nums[left] < nums[right]){
                temp[k++] = nums[left++];
            }
            else{
                temp[k++] = nums[right++];
            }
        }
        while(left<=mid){
            temp[k++] = nums[left++]; 
        }
        while(right<=high){
            temp[k++] = nums[right++]; 
        }
        int m=0;
        for(int i=low; i<=high; i++){
            nums[i] = temp[m++];
        }
    }

    void mergeSort(vector<int>& nums, int low, int high, int& reversePairsCount){
        if(low >= high){
            return;
        }
        int mid = (low + high) >> 1;
        mergeSort(nums, low, mid, reversePairsCount);
        mergeSort(nums, mid+1, high, reversePairsCount);
        merge(nums, low, mid, high, reversePairsCount);
    }
public:
    int reversePairs(vector<int>& nums) {
        int reversePairsCount = 0;
        mergeSort(nums, 0, nums.size()-1, reversePairsCount);
        return reversePairsCount;
    }
};
