class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
     vector<vector<int>> ans ; 
     vector<vector<int>> points;
   multiset<int>  st ; 
   st.insert(0);
    for( auto & pair : buildings   ){
         vector<int > temp(2, 0) ; 
         temp[0] = pair[0];
         temp[1] = - pair[2];
         points.push_back(temp);
         temp[0] = pair[1];
         temp[1] = pair[2];
         points.push_back(temp);
        
    }  sort(points.begin() , points.end() , comparator);
       int current_height = 0 ; 
       for( auto & pair :   points){
            int currentPoint  = pair[0];
            int height =  pair[1];
             if( height < 0) st.insert( - height);
             else {  st.erase(st.find(height));
             }
            int cc = *st.rbegin();
             if( current_height != cc) 
             { ans.push_back({currentPoint , cc});
                current_height = cc;
                            }
    
       }
        return ans;
    }
 static    bool comparator( vector<int> & a , vector<int> &b){
       if( a[0] == b[0])
           return a[1]<=b[1];
        return a[0] < b[0];
    }
};