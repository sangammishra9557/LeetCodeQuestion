class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
       // this is very good question you have to make the revision brother  on the basis
        stack<int> st; 
        for( int i = 0 ; i<arr.size(); i++){
            
            int maxi = arr[i];
            while(!st.empty()  && st.top() >arr[i]){
                maxi =  max(maxi ,st.top());
                st.pop();
            }
             st.push(maxi);
            
            
            
        }
        return st.size();
    }
};