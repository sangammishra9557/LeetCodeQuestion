class Solution {
public:
    int nextGreaterElement(int num) {
         string s = to_string(num);
         int n = s.size();
         int idx = -1;
         int  idx2 = -2;
           if(n==1)
                return -1;
           if(num >= INT_MAX)
               return -1;
        
                      
        for(int i= n -2 ; i>=0 ; i--)
        {
            if(s[i]<s[i+1])
            {idx =  i ;
                break;}
            
        }
         if(idx == -1)
         {  
               return -1;
         }
        
        
           for(int i = n-1; i>=0 ; i--){
                 if(s[i] > s[idx])
                 {idx2 = i ;
                      break;
                 }
           }
            swap(s[idx], s[idx2]);
            reverse(s.begin()+idx+1 , s.end());
             
        
           long long  ans =  stoll(s);
           if (ans > INT_MAX)
                return -1; 
           return ans ; 
        
        
             
        
        
        
        
        
        
        
        
    }
};