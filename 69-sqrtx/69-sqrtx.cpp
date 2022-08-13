class Solution {
public:
    int mySqrt(int x) {
         int left = 1; 
         int right =   x ; 
         int answer = 0 ; 
          if( x== 0) return 0 ; 
        
         while(left <= right){
              int mid = left +(right-left)/2;
              if(mid ==(x/mid)) return mid ; 
              else if( mid > x / mid)  right = mid-1;
              else {
                   answer = mid;
                  left = mid+1;
              }
         }
         return answer ;
        
    }
};