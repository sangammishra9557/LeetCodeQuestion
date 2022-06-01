class Solution {
public:
    bool hasAllCodes(string s, int k) {
    
           vector<int> ans ; 
        
        //  power set algortihm 
//           for(int num = 0 ; i< 1<<k  ; i++)
//           {
//                 string s = "";
//                 for( int i =0 ; i < k ; i++)
//                 {
//                       if((num &(1<<i)) != 0 )
//                           s.push_back('1');
//                       else 
//                           s.push_back('0');
//                 }
//                  ans.push_back(s);
               
//           }
          if( k >  s.size()) 
              return false;
         unordered_set<string> st ; 
         for( int i =0 ; i<= s.size()- k ; i++ )
         {
           st.insert(s.substr( i , k));
              
         }          
         return st.size() ==  pow(2,k);
        
    }
};

              
        