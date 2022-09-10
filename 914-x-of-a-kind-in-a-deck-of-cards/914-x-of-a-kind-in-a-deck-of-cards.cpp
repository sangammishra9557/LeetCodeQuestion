class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        if(deck.size() == 1) return false;
         unordered_map<int , int> mp ; 
         for(int i : deck) mp[i]++;
         int gc = 0 ; 
         for( auto & it : mp){
              gc = __gcd(gc,it.second);
         }
        
         // gc ==1  ka matlb hai ki 1 hi elemnt present  mtlb ki  koi common elemnt nhin hai toh single single group ke elemnt hi devide ho payenge 
         if( gc>=2 ) return true;
         else return false; 
        
    }
};