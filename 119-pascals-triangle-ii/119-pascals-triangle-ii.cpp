class Solution {
public:
    vector<int> getRow( unsigned  int   n ) {
        vector<int> ans( n+1 , 1) ;
         for(int i =1 ;i<n ; i++){
              ans[i]  =   ((unsigned  long )  ans[i-1]    * ( n- i+1))/ i    ;
         }
         return ans;
        
    }
};