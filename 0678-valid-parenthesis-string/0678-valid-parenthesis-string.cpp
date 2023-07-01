class Solution {
public:
    bool checkValidString(string s) {
        // int star = 0 ;
        // stack<char> st;
        //  for(auto & it :s){
        //       if( it == '(' ) st.push(it);
        //      else if( it =='*') star++;
        //      else {
        //           if(st.empty() && star <= 0) return false;
        //           if(st.empty()) star--;
        //          else st.pop();
        //      }
        //  }
        // while(star>0 && st.size()>0){
        //     st.pop();
        //     star--;
        // }
        // if(st.size()>0) return false;
        // return true;
        
        //THERE ARE TWO SULTIONS THAT EXIST THE FIRST ONE WITH TWO STACKS one for storing the positions
        
         int cmin = 0 , cmax = 0 ;
        for(auto &it : s){
            if( it =='(') cmax++,cmin++;
            else if ( it == ')'){
                cmax--;
                cmin = max(cmin-1, 0);
            }
            else{
                 cmax++ ; 
                 cmin = max(cmin-1 , 0);
            }
            if(cmax<0) return false;
        }
         return cmin ==0;
    }
};