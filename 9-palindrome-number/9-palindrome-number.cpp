class Solution {
public:
    bool isPalindrome(int x) {
         long long   ans = x;
         if(x < 0 ) return false;
         
         long long   temp  = 0 ; 
         while( x >0 ){
              temp =  (temp *10) +  x%10 ; 
               x =  x/10;
               
         }
          return temp ==  ans;
    }
};