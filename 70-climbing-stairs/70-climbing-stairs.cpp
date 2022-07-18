class Solution {
public:
    int climbStairs(int n) {
//         int a = 0 , b= 1 ,sum = 0, i;
//         if (n<=1) return 1;
//         for( i =2;i<=n+1;i++)
//         { sum = a+b;
//          a= b;
//          b= sum;
            
//         }
//         return sum;
        
        //
        vector<int> memo(n+1 , -1);        
           return countways( 0 , n , memo);
        
        
        
    }
     int  countways(int  currentstair , int  n  , vector<int> & memo)
     {
        if(currentstair == n) return 1 ; 
        
        if(currentstair > n ) return  0 ; 
          if(memo[currentstair] != -1) return memo[currentstair];
         
         int one =  countways(currentstair +1 , n , memo);
         int two = countways(currentstair +2 , n , memo);
         return   memo[currentstair] = one + two;
           
     }
};