class Solution {
public:
    int evalRPN(vector<string>& tockens) {
        
        if(tockens.size() ==1) return stoi(tockens[0]);

        stack<int> st; 
        int result = 0;
        
        
      

        for(int i = 0 ;i<tockens.size();i++){


           if (tockens[i] != "*" && tockens[i] != "/" && tockens[i] != "+" && tockens[i] !="-")
               st.push(stoi(tockens[i]));
            
            
           else{
                int a = st.top();
                st.pop();
               int b = st.top();
               st.pop();
    
                result = 0 ; 
               if(tockens[i] == "/") result = b/a;
               else if(tockens[i] == "*") result = b*a;
               else if(tockens[i] == "+") result = b+a;
               else result = b-a;
               
               
               st.push(result); 
           }
        }
        
        
        
        return result;
    }
};