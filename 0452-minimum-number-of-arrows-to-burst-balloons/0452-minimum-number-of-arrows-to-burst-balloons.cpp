class Solution {
public:
    
    bool static comparator(vector<int>&a , vector<int> & b) { return a[1]<b[1];}
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size() == 0) return 0;
        
        sort(points.begin(),points.end(),comparator);
        int pos = points[0][1];
        
        int cnt = 1;
        for(int i = 1 ; i<points.size();i++){
            
            
            if(pos < points[i][0]){
                cnt++;
                pos = points[i][1];
            }
        }
        return cnt ;
    }
};