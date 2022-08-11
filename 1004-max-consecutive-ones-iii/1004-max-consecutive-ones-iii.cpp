class Solution {
public:
    int longestOnes(vector<int>& arr, int k) {
        
        
         int n = arr.size(); 
         int i  =  0 ;
         int j = 0 ; 
         int zeros = 0 ;
         int ans = INT_MIN ;
         while( j < n ){
              if(arr[j] == 0) zeros ++;
             
              while(zeros > k ){
                   if(arr[i] == 0) zeros--;
                   i++;
              }
             
               ans = max(ans , j-i+1);
               j++;
         }
       
         return ans ; 
    }
};