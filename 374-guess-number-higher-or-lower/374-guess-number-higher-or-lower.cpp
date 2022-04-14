/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        
     int i = 1 ; 
     int j = n ; 
        int mid;
         int  result;
      while( i<=j)
      {
           mid =  i+ (j-i)/2;
          
           int ans = guess(mid);
           if(ans == 0)
           { result = mid;
                   break;}
           if (ans == -1) 
                j = mid-1;
           else 
                i = mid+1;
          
          
      }
         return result; 
        
    }
};