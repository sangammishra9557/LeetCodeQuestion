class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int cnt = 0; 
        if(coins <costs[0]) return 0;
        for(auto & it: costs){
            if(it <=coins){
                cnt++;
                coins -= it;
            }
        }
        return cnt;
    }
};