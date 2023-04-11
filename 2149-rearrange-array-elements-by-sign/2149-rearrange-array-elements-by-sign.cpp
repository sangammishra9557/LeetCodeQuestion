class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans ; 
        vector<int > t1 ; 
        vector<int>  t2 ; 
        for(auto it : nums) 
        {if(it>0) t1.push_back(it);
         if(it<0)t2.push_back(it);}
        
        for(int i = 0 ; i<t1.size();i++){
            ans.push_back(t1[i]);
            ans.push_back(t2[i]);
        }
        return ans;
    }
};