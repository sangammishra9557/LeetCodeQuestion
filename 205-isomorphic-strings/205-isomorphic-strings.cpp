class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        
     int  ma1[128] = {0} , ma2[128] = {0} , n = s.size();
     if(s.size() != t.size()) return false;
     for(int i = 0 ; i<n ; i++){
          
         if(ma1[s[i]] != ma2[t[i]]){
             cout<<i;
             return false; 
         } 
         ma1[s[i]] = i+1;
         ma2[t[i]] = i+1;
     }
        return true;
        
        
    }
};