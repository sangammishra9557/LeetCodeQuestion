class Solution {
    
    
    
private :
    void combinations(int index, string output,string digits, vector<string> &ans , string mapping []){
        
        
        
         if(index>= digits.size())
         {
             ans.push_back(output);
             return ;
         }
        
        int idx = digits[index]-'0';
        string temp = mapping[idx];
        
        for(int i = 0 ; i<temp.size();i++){
            output.push_back(temp[i]);
            combinations(index+1 , output ,digits ,ans , mapping);
            output.pop_back();
        }
        
        
        
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans ; 
        
        if(digits =="") return ans;
        string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"}; 
        combinations(0 ,"",digits,ans, mapping);
        return ans;

    }
};