class Solution {
public:
    int kConcatenationMaxSum(vector<int>& arr, int k) {
         int n  = arr.size();
         if(arr.size() == 0) return 0 ; 
         int64_t  total = accumulate(arr.begin() , arr.end() , 0);
         int64_t mod = 1e9+7;
          int sum= 0 ;
         int maxi = 0;
        for(int i = 0 ; i< n* min(2,k) ; i++){
             sum  = sum%mod;
             sum = max(arr[i%n] , sum+arr[i%n]);
             maxi = (max(maxi , sum))%mod;
        }
        if(total < 0 || k == 1) return maxi ; 
        else{
          return     maxi + (total % mod * (k-2))%mod;
        }
        
    }
};