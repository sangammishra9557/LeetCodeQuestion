class Solution {
public:
    int MOD = 1e9 + 7;
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        horizontalCuts.push_back(h);
        sort(horizontalCuts.begin(), horizontalCuts.end());
        
        verticalCuts.push_back(w);
        sort(verticalCuts.begin(), verticalCuts.end());
        
        // First gaps can be 0 to arr[i].
        long long maxHorizontalGap = horizontalCuts[0];
        long long maxVerticalGap = verticalCuts[0];
        
        for (int i = 1; i < horizontalCuts.size(); ++i) {
            maxHorizontalGap = max(maxHorizontalGap, (long long)horizontalCuts[i] - horizontalCuts[i - 1]);
        }
        
        for (int i = 1; i < verticalCuts.size(); ++i) {
            maxVerticalGap = max(maxVerticalGap, (long long)verticalCuts[i] - verticalCuts[i - 1]);
        }
        
        return (maxHorizontalGap % MOD * maxVerticalGap % MOD) % MOD;
    }
};