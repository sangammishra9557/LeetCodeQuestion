class Solution {
public:
    int majorityElement(vector<int>& v) {
        int  count = 0 ; 
        int majorityElement = 0 ; 
         for( int &num : v){
             
             if(count == 0 )
                 majorityElement = num;
             
             if(majorityElement == num)
                  count++;
             else 
                 count--;
                 
         }
          return majorityElement;
    }
    };
