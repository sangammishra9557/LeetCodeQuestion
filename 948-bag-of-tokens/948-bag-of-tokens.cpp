class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int x=0, y=tokens.size()-1, curr=0, res=0;
        while (x<=y){
            if (power<tokens[x] && curr==0) return 0;
            while (x<=y && power>=tokens[x]){
                curr++;
                power-=tokens[x];
                x++;
            }
            res = max(curr, res);
            if (x>=y) return res;
            power+=tokens[y];
            y--;
            curr--;
        }
        return res;
    }
};