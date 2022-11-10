class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        int  pro = 1 ; 
        int flag = 0 ; 
        
        for( auto num : a) {
            if(num == 0) flag ++; 
            else pro = pro*num; 
        }
        
        
        for(int i = 0 ; i<a.size() ; i++){
            
             if( flag>1)a[i] = 0 ; 
             else if(flag == 1){
                  
                  if(a[i] == 0)a[i] = pro ; 
                 else a[i] = 0;
             }
            else a[i] = pro/a[i];
        }
        return a ; 
    }
};