class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
       int n = heights.size();
       vector<int> next(n ,n);
       stack<int> st; 
        for( int i = 0; i<n; i++){
            while(!st.empty() && heights[st.top()] > heights[i]){
                next[st.top()] = i;
                 st.pop();   
            }
             st.push(i);
        }
        vector<int> previous(n ,-1);
         while(!st.empty()) st.pop();
        for(int i =0; i<n;i++){
            while(!st.empty() and heights[st.top()] >= heights[i]){
                st.pop();
            }
            if(!st.empty()) previous[i] = st.top();
            st.push(i);
        }
    int ans = 0 ; 
    for( int i = 0; i<n; i++){
         ans = max(ans, (next[i]-previous[i]-1)*heights[i]);
    
    }
        return ans;
    }
};