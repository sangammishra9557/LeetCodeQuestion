//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
   stack <char> st;
     for( auto it : s){
         
         if(it != ']') st.push(it);
          else if(it ==']'){
             string temp = "";
             while(st.top() != '['){
                 temp.push_back(st.top());
                 st.pop();
                 
             }
             reverse(temp.begin() , temp.end());
             st.pop();
             string num = "";
             while(! st.empty() && st.top() >='0' and st.top() <= '9'){
                 num.push_back(st.top());
                 st.pop();
             }
             reverse(num.begin() , num.end());
             int n = stoi(num);
             for(int i =0 ; i<n ; i++){
                 for(int j = 0 ; j<temp.size() ; j++){
                     st.push(temp[j]);
                 }
             }
         }
             
             
         
     }
         string ans = "";
         while(!st.empty()){
             ans.push_back(st.top());
             st.pop();
         }
         reverse(ans.begin() , ans.end());
          return ans ; 
     }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends