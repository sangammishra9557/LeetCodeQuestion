class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
         unordered_map<string , int> memo ;
         return profit( 0 , 1 , k , prices , memo);
    }
    
    
    
     int profit( int currentidx , int canbuy , int trans ,  vector<int> & prices , unordered_map<string ,int>  &memo){

            if(currentidx >= prices.size() || trans == 0)  return  0 ;
            
           string s  =  to_string(currentidx) +"-"+ to_string(canbuy)+ "-"+ to_string( trans);
           if(memo.count(s))  return  memo[s];
            int ans = 0;
           if( canbuy  == 1 ){   
                int idl =  profit( currentidx+1 , canbuy ,  trans ,  prices , memo);
                int buy = -prices[currentidx]  + profit( currentidx+1 , 0 ,  trans , prices , memo);
                 ans  =  max( idl  , buy );
           }
           else{
               int idl =  profit( currentidx+1 , canbuy ,  trans ,  prices , memo);
                int sell  =  prices[currentidx] + profit( currentidx+1 , 1  ,   trans-1  ,   prices ,memo);
                  ans = max( idl , sell);
           }
         
          memo[s] = ans ;
          return ans ;
     }
};