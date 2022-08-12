class Solution {
public:
    bool isAnagram(string s, string t) {
     if(s.size() != t.size())  return false;
     vector<int>  anag(26 , 0);
     vector<int>  an(26, 0 );
        
        for( auto &cha : s ){
            anag[(cha-'a')]++;
        }
        
         for( auto & cha :t){
             an[(cha-'a')]++;
         }
        
         for(int i = 0 ; i< 26 ; i++){
              if(anag[i] != an[i]) return false;
         }
         return true;
    }
};