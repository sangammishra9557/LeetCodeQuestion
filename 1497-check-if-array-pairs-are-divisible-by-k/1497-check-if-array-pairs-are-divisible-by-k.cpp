class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        
        
        
       unordered_map<int,int>  mp ; 
          for( auto & it: arr)
          { int  rem  = (( it % k )+k)%k;
           mp[rem]++;
           
          }
    
              
      
           for( auto & pair :  mp)
           {   int key1= pair.first;
               int key2 =  k - pair.first;
            
             if( key1 == 0 )
             { if(mp[key1] %2 != 0) return false;
        
             }
            
            else if (mp.count(key2) == 0 || mp[key1] != mp[key2])
                 return false;
            
           }
        return true;
    }
};