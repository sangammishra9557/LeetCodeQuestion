class Solution {
public:
    int maxSubArray(vector<int>& v) {
         int m = INT_MIN , sum = 0 ; 
        
         for(auto it :v){
             sum += it ; 
             if(sum>m) m = sum;
             if(sum<0) sum = 0;
         }
        return  m;
        
    }
};