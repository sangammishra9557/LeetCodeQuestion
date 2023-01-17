class Solution {
public:
    vector<int> parent,size;
    
    
    void Union(int a , int b){
        
        int pa = find(a);
        int pb = find(b);
        if(pa != pb){
            if(size[pa] < size[pb]) swap(pa,pb);
            parent[pb] = pa;
            size[pa] += size[pb];
        }
    }
    int find(int a){
        if(parent[a] == a) return a ; 
        
        return parent[a] = find(parent[a]);
        
    }
    
    int makeConnected(int n, vector<vector<int>>& connections) {
      int et = connections.size();
      if(n > et+1) return -1;
       parent.resize(n,-1);
        size.resize(n,1);
        
        for(int i = 0 ;i<n; i++){
            parent[i] = i;
        }
        for(auto & vect: connections){
            Union(vect[0],vect[1]);
        }
        int ct = 0;
      for(int i =0 ; i<n; i++){
          if (parent[i] == i) ct++;
      }
        return ct-1;
    }
};