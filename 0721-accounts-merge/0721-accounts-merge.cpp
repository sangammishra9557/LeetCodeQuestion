class Disjoint{
    
    public: 
     vector<int> parent,size;
     Disjoint(int n){
         parent.resize(n+1,0);
         size.resize(n+1,0);
         for(int i = 0 ; i<= n ; i++){
             parent[i] = i ; 
             size[i] = 1 ; 
         }
     }
    int find(int a){
        if(a == parent[a]) return a ; 
        return parent[a] = find(parent[a]);
    }
    void UnionSize(int a , int b){
        int pa = find(a);
        int pb = find(b);
        if(pa != pb){
           if( size[pa] < size[pb]) swap(pa,pb);
            parent[pb] = pa;
            size[pa] += size[pb];
        }
    }
    
};
class Solution {
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
      
        int n = accounts.size(); 
        Disjoint  ds(n);
        unordered_map<string, int> mapMailNode; 
        for(int i = 0 ; i<n ; i++){
            for( int j = 1 ; j<accounts[i].size(); j++)
            {   string mail = accounts[i][j];
                if(mapMailNode.count(mail ) == 0) {
                    mapMailNode[mail] = i;
                }
                else{
                    ds.UnionSize(mapMailNode[mail] , i);
                }
            }
        }
        

        vector<string>temp[n];
        for(auto it : mapMailNode){
            string mail = it.first ; 
            int node = ds.find(it.second);
            temp[node].push_back(mail);
        }
        vector<vector<string>> ans; 
        for(int i = 0 ; i<n ; i++){
            if(temp[i].size() == 0) continue; 
            vector<string> result ;
            result.push_back(accounts[i][0]);
            for(auto &it: temp[i]) result.push_back(it);
            sort(result.begin()+1 ,result.end());
            ans.push_back(result);
            
        }
        return ans;
    }
};