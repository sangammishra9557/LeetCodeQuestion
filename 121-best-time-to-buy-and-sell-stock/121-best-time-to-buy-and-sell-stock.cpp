class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int  buy = prices[0] ; 
        
           for(int i =0 ; i<prices.size() ; i++){
                 buy = min(buy , prices[i]);
                 prices[i] =  prices[i] - buy ;
               }
        
        
         return  *max_element( prices.begin() , prices.end());
    }
};