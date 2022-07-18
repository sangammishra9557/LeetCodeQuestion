class Solution {
public:
    vector<vector<int>> generate(int n) {
          vector<vector<int>>  ans;
          int la = 0 ;
          for(int i =0 ; i<n  ; i++){
                vector<int> temp(i+1, 1);
              for(int  j = 1 ; j< i ; j++){
                   int a = 0  , b =0 ;
                    a= ans[i-1][j-1];
                    b = ans[i-1][j];
                   temp[j] = a+b;
              }
               ans.push_back(temp);
 
          }
         return ans;
    }
};