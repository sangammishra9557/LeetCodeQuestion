class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
      int gs=accumulate(gas.begin(),gas.end(),0);
      int cs=accumulate(cost.begin(),cost.end(),0);
      if(gs<cs) return -1;
        
         int current=0 ;
         int start=0;
        for(int i=0 ;i<gas.size();i++){
          current+=gas[i]-cost[i];
          if(current<0){ start=i+1;
                         current=0;
                       }
        }
        return start;
            
    }
};