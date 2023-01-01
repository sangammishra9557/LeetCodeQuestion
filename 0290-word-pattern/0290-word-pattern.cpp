class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        vector<string> temp ; 
        
        stringstream str(s);
        string word;
        while(str >> word){
            temp.push_back(word);
        }
        
        if(temp.size() != pattern.size()) return false;
      unordered_map<char, string> mp;
      unordered_map<string,char> mp2;
        
        for(int i = 0; i<pattern.size();i++){
            char x = pattern[i];
            string y = temp[i];
            if(mp.count(x) && mp[x] != y){
                return false;
            }
            else if(mp2.count(y) && mp2[y] !=x) return false;
            else 
            {mp[x] = y;
             mp2[y] = x ; 
            }
        }
        return true;
    }
};