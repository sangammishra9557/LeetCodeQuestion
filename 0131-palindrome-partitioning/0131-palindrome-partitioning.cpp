class Solution {
public:
    vector<vector<string>> partition(string s) {
    
        vector<vector<string>> ans; 
        vector<string> temp; 
        int n = s.size();
        partitions(0 ,temp , ans,s ,n);
        return ans;
        
        
    }
    void partitions( int i , vector<string> &temp , vector<vector<string>> & ans , string & s, int n){
        
        if( i == n){
            ans.push_back(temp);
            return;
        }
        string str = "";
        for(int j = i  ; j<n; j++){
             str.push_back(s[j]);
            if(ispalindrome(i,j,s)){
                temp.push_back(str);
                partitions(j+1 , temp , ans, s,n);
                temp.pop_back();
            }
        }
        
        
    }
    
     bool ispalindrome( int i , int j , string &s ){
          
          while( i< j){
               if(s[i]  != s[j])  return false;
              
                i++ ; 
                j--;
          }
         
           return true ;
     }
};