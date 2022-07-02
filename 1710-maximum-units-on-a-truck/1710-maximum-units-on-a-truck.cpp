class Solution {
public:
    
  static  bool sortcol(vector<int> &v1,
                vector<int> &v2 ) {
    return v1[1] > v2[1];
}
    int maximumUnits(vector<vector<int>>  &box, int trucksize) {
        
         sort(box.begin() , box.end(), sortcol);
         int truck = 0 ;
         int ans = 0 ; 
          for( auto boxes : box){
            if(boxes[0] < trucksize)
            {ans+=  boxes[0] * boxes[1];
              trucksize -=  boxes[0];
            }
            else if( boxes[0] >= trucksize)
            {ans += trucksize * boxes[1];
              break;
             }
             
              
          }
              return ans ; 
    }
    

    
};