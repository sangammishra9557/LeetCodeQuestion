class Solution {
public:
     
    int parent[26];

    void dsu_union(int a , int b){
        int pa = find(a);
        int pb = find(b);
        if( pa != pb){
            if(pa>pb) swap(pa,pb);
            parent[pb] = pa;
        }
        
    }
    int find(int a){
        
        if(parent[a] == -1) return a;
        return parent[a] = find(parent[a]);
    }
    
    
    string smallestEquivalentString(string s1, string s2, string baseStr) {
    int n = s1.size();
        memset(parent ,-1 , sizeof(parent));
    for(int i = 0 ; i<n; i++){
        dsu_union(s1[i]-'a' , s2[i]-'a');
    }
      string temp = "";   
      for(int j = 0; j< baseStr.size();j++){
        char b =  find(baseStr[j]-'a')+'a';
          temp.push_back(b);
      }
        return temp;
    }
};