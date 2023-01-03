class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
 
         int n = strs[0].size();
         int m = strs.size();
        int c = 0;
        for(int i =0; i<n ; i++){
            int flag = 0;
            for(int j =1 ;j<m ; j++)
            {
                if (strs[j-1][i] > strs[j][i]) flag =1; 
            }
         if(flag) c++;
        }
         return c;
    }
};