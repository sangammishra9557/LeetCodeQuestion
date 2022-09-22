class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans ; 
        unordered_map<char , int> mp ; 
         int n = s.size();
          for(int i =0 ; i<n ; i++){
               mp[s[i]] = i;
          }
         int prev = -1  ; 
         int maxi =  0 ; 
         for(int i = 0 ; i<n ; i++){
              maxi = max(maxi , mp[s[i]]);
             
             if(maxi == i){
                  ans.push_back(maxi-prev);
                  prev = maxi ; 
             }
         }
        return ans ; 
    }
};