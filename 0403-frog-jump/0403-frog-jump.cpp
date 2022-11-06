class Solution {
public:
    unordered_map<string , bool> mp;
    bool canCross(vector<int>& stones) {
        
        return cross(stones , 0 , 0);
    }
    bool cross(vector<int> stones ,int  pos , int k ){
        string s = to_string(pos)+"-"+to_string(k);
        if(mp.count(s))  return mp[s];
        
        
         for( int i = pos+1 ; i<stones.size()  ; i++){
               int gap = stones[i] - stones[pos];
              if (gap < k-1)  continue ; 
              if( gap > k+1)   return  mp[s] =   false; 
              
              if(cross(stones , i , gap))  return  mp[s]=true ; 
             
         }
         return mp[s] = pos == stones.size()-1;
    }
};