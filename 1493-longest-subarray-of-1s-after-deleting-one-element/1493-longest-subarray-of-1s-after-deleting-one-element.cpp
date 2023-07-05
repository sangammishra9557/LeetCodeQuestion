class Solution {
public:
    int longestSubarray(vector<int>& arr) {
         int n = arr.size();
         int i = 0  , j = 0 ; 
          int answer = 0;
         int zeros = 0 ;
         for( j = 0 ; j<n ; j++){
              if(arr[j] == 0) zeros++;
              while(zeros>1){
                  if(arr[i]== 0){
                      zeros--;
                  }
                  i++;
              }
             answer = max(answer , j-i+1);
                  
         }
         return answer-1;
    }
};