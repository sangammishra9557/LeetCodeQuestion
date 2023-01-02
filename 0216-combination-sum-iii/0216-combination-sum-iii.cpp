class Solution {
private:
    
    
   void helper(int i , int target ,int sum , int k ,  vector<int> & temp , vector<vector<int>> & ans){
       
       if( sum == target && k == 0){
           ans.push_back(temp);
           return;
       }
       if( k <= 0 ||   i>9 ) return ; 
       
       helper(i+1 , target ,sum ,  k , temp , ans);
       
       temp.push_back(i);
       helper(i+1 , target , sum + i , k-1 ,temp , ans);
       temp.pop_back();
       
       
   }
    
    
    
    
public:
    vector<vector<int>> combinationSum3(int k, int n) {
       vector<vector<int>> ans; 
        vector<int> temp ;
        helper(1 , n , 0 , k , temp , ans );
        return ans;
        
        
    }
};