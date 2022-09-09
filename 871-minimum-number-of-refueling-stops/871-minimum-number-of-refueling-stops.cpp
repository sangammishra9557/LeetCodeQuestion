class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations){
        
         int n  = stations.size();
         priority_queue<int> pq ; 
         int steps = 0 ; 
         int max_reach = startFuel ; 
         if( startFuel >= target) return 0;
       
         for(int i =0 ; i<n ; i++){
             
              if( stations[i][0]  <= max_reach ){
                  pq.push(stations[i][1]);
                   cout<<i<<" ";
                  continue;
              }
              else{
                       while(stations[i][0] > max_reach && pq.size()>0)
                       {
                            max_reach+= pq.top();
                            pq.pop();
                           steps++;
                       }
                       pq.push(stations[i][1]);
                    if( stations[i][0] > max_reach){ cout<<i ;
                        return -1;
                                                   }
         }
         }
              while( max_reach < target  && pq.size()>0)
              {
                   max_reach+=  pq.top();
                   pq.pop();
                   steps++;
              }
          if( max_reach < target) return -1; 
        else return steps;
   
      }
};