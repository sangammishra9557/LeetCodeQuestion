class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
          vector<int> dist(n + 1, INT_MAX);
        dist[k] = 0;
        unordered_map<int, vector<pair<int, int>>> m;
        for(int i = 0; i < times.size(); i++) {
            m[times[i][0]].push_back({times[i][1], times[i][2]});
        }
        //first find shortest distance from all nodes form k and then find the largest distance among them as total time will be that
        priority_queue<pair<int, int>> q;
        q.push({0, k});
        
        while(!q.empty()) {
            int node = q.top().second;
            int p_dist = q.top().first;
            
            q.pop();
            
            for(auto p: m[node]) {
                int nbr = p.first;
                int c_dist = p.second;
                if(dist[node] + c_dist >= dist[nbr]) {
                    continue;
                }
                int new_dist = dist[node] + c_dist;
                dist[nbr] = new_dist;
                q.push({-1*new_dist, nbr});
                
            }
        }
        int time_taken = 0;
        for(int i = 1; i <= n; i++) {
            if(dist[i] == INT_MAX) return -1;
            time_taken = max(time_taken, dist[i]);
        }
        return time_taken;
    }
};