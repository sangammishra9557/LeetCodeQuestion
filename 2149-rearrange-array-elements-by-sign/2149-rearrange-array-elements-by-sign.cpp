class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // vector<int> ans(nums.size()) ; 
        //  int pos = 0 , neg = 1;
        // for(int i = 0 ; i< nums.size(); i++){
        //     if(nums[i] > 0 )
        //         ans[pos] = nums[i] , pos+= 2;
        //     else ans[neg] = nums[i] , neg+= 2;
        // }
        // return ans;
        
        // NOW THE GENERAL Solution that i can code is 
        vector<int> pos , neg;
        for(auto it : nums){
             if( it>0) pos.push_back(it);
             else neg.push_back(it);
        }
        
        vector<int> ans (nums.size());
             
         if(pos.size()>neg.size()){    
              for(int i = 0 ; i< neg.size();i++){
                  ans[2*i] = pos[i];
                  ans[2*i+1] = neg[i];
              }  
               int idx = neg.size()*2;
              for(int i = neg.size() ; i< pos.size();i++){
                  ans[idx++] = pos[i];
              }
         }
        
        else {
               for(int i = 0 ; i<pos.size() ; i++){
                   ans[2*i] = pos[i];
                   ans[2*i+1] = neg[i];
               }
                 int idx = pos.size()*2;
            
               for(int i = pos.size(); i<neg.size();i++){
                   ans[idx] = neg[i];
               }
        
        }
        return ans;
    }
};