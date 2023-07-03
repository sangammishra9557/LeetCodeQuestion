class Solution {
public:
    bool buddyStrings(string s, string goal) {
//          if(s.size() != goal.size()) return false;
//         // the logic is km se km 1 char repeated more than 1  hona chahiye agr  exactle same hai toh
//          int sum = 0; 
//          int diff = 0 ;
//          unordered_set<int> st ; 
//          for( int i = 0 ; i< s.size();i++){
            
//               if(s[i] != goal[i]) diff++;
//               st.insert(s[i]);
//          }
        
//         if( diff == 2)
//        diff ==0) return st.size()<s.size();
        
//         return false;
         // yeh logic glt ho gya 
         if(s.size() != goal.size()) return false;
        
         if(s == goal){
              unordered_set<int> st(s.begin(),s.end());
              return st.size()< s.size();
         }
         int  idx1 = 0 , idx2 = 0; 
         for(int i = 0 ; i<s.size(); i++){
              if(s[i] != goal[i]){
                  if(idx1 == 0) idx1 = i;
                  else idx2 = i;
              }
         }
        swap(s[idx1] , s[idx2]);
        return s == goal;
    }
};