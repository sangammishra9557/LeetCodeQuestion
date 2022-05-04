class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
         multiset<int>   st ; 
         int c= 0 ;
           for ( auto &it :  nums){

               if( st.count( k - it) == 0)
                       st.insert(it);
               else {
                      st.erase(st.find(k-it));
                           c++;
                   }
               
          
                  
           }
         return c;
    }
};