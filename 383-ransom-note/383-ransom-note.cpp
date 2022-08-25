class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> ransom(26 , 0);
        vector<int> magazin(26 , 0);
        for( auto i:ransomNote){
            ransom[(i-'a')]++;
        }
        for( auto i:magazine){
            magazin[(i-'a')]++;
        }
        for(int i = 0 ; i<26 ; i++){
             if(ransom[i] != 0  and ransom[i] > magazin[i]) return false;
        }
        return true;
        
    }
};