class Solution {
public:

    int maxPoints(vector<vector<int>>& points) {
       
        int maxi =0;
        for(int i=0;i<points.size();i++){
             map<pair<int,int>, int>slope;
            int dup=0;
            for(int j=i;j<points.size();j++){
                int dx= points[i][1]- points[j][1];
                int dy= points[i][0]- points[j][0];

                if(dx==0 and dy==0) dup++;

                else{
                    
                    int gg= __gcd(dx, dy);
                    dy/=gg;
                    dx/=gg;
                    slope[{dy,dx}]++;
                }
                
            }
            
         
            maxi = max(maxi, dup);
            
            for(auto i: slope){
                maxi = max(maxi, i.second+dup);
            }
        }
        return maxi;
        
    }
};