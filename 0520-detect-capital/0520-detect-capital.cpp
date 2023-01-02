class Solution {
public:
    bool detectCapitalUse(string words) {
        
        
        
        int ct = 0; 
        for(auto it : words) if(isupper(it)) ct++;
        
        if(ct == 0 || (isupper(words[0]) && ct == 1)|| ct== words.size()) return true;
        return false;
    }
};