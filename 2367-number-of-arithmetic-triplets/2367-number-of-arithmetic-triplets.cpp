class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
      
       vector<int> res(201 , 0);
        int c = 0 ; 
       for(int i: nums)
       {
           if( i >= 2*diff)
           {
               c+= (res[i-diff] && res[i-(2*diff)]);
               
           }
           res[i] = 1;
       }
        return c;
    }
};