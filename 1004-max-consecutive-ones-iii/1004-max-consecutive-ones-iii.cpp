class Solution {
public:
    int longestOnes(vector<int>& arr, int k) {
        
         int n = arr.size();
         int i = 0  , j = 0 ; 
          int answer = 0;
         int zeros = 0 ;
         for( j = 0 ; j<n ; j++){
              if(arr[j] == 0) zeros++;
              while(zeros>k){
                  if(arr[i]== 0){
                      zeros--;
                  }
                  i++;
              }
             answer = max(answer , j-i+1);
                  
         }
         return answer;
    }
};