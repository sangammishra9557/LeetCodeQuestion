class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
            int m=grid.size();
            int n=grid[0].size();
            vector<int> v;
            for(int i=0;i<m;i++)
            { 
                for(int j=0;j<n;j++)
                {
                    v.push_back(grid[i][j]);
                }
            }

            int s=v.size();
            k=k%s;
            vector<int> t;
            for(int i=s-k;i<s;i++)
            {
                t.push_back(v[i]);
            }
            for(int i=0;i<s-k;i++)
            {
                t.push_back(v[i]);
            }
            v.clear();
            grid.clear();
            for(int i=0;i<s;i++)
            {
                  if(v.size()<n)
                      v.push_back(t[i]);
                  if(v.size()==n)
                  {
                      grid.push_back(v);
                      v.clear();
                  }
            }
            return grid;
        
    }
};