class Solution {
public:
    string removeDuplicates(string s, int k) {
             stack<pair<char, int>> st;
            for(int i =0 ; i<s.size() ; i++)
            {
                 if(st.size() == 0 || s[i] != st.top().first)
                     st.push({s[i],1});
                 else {
                      int  lastcount = st.top().second;
                      st.pop();
                     st.push({s[i],lastcount+1});
                 }
                  if(st.top().second == k)
                       st.pop();
                     
            }
           string ans = "";
           while(!st.empty())
           {
                for(int i =0 ; i<st.top().second ; i++)
                {
                     ans.push_back(st.top().first);
                }
                st.pop();
           }
          reverse(ans.begin(),ans.end());
         return ans;
    }
};