class Solution {
public:
    
    
    int minCostClimbingStairs(vector<int>& cost) {
//           cost.push_back(0);
//             for( int i = cost.size()-3  ; i>=0 ; i--){
                
//                   cout<<i;
//                  cost[i]+=  min(cost[i+1],cost[i+2]);
    
//             }
//          return  min(cost[0], cost[1]);
              int n = cost.size();
          vector<int> ans(cost.size()+1 , -1);
            int val =    mincost(cost ,ans , 0 , n) ; //, mincost(cost, ans , 1 , n));
        
     return min ( ans[0] , ans[1]);
          
    }
 private:
     int mincost(vector<int> &cost , vector<int>  &ans , int currentIndex , int n ){
//           if(n<0) return 0;
//           if(n<2) return ans[n]=cost[n];
          
//           if(ans[n]!=0) return ans[n];
//           int left = cost[n]+ mincost(cost,ans ,n-1);
//           int right = cost [n]+mincost(cost,ans,n-2);
          
//          return ans[n]= min(left,right);
            
            if(currentIndex ==  n)
                 return  0 ; 
           
             if ( currentIndex  > n )
                  return 10000 ;
             
             if( ans[currentIndex] != -1)
                 return ans[currentIndex];
         
           int left =  cost[currentIndex] + mincost(cost , ans , currentIndex+1 ,  n );
           int right = cost [currentIndex] + mincost (cost , ans  , currentIndex+2 , n );
         
             return  ans[currentIndex] = min ( left , right);
         
                  
      }
};