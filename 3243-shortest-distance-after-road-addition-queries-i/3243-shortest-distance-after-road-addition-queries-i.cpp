class Solution {
public:
    void dfs(int node, unordered_map<int, vector<int>> &adj, vector<int> &shortestPath){
        for (int newNode : adj[node]) {
            if (shortestPath[newNode] > shortestPath[node] + 1) {
                shortestPath[newNode] = shortestPath[node] + 1;
                dfs(newNode, adj, shortestPath);
            }
        }
    }

    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        std::unordered_map<int, std::vector<int>> adj;
        vector<int> shortestPath = {0}; 
        for(int i = 0; i < n-1; i++){
            adj[i].push_back(i+1);
            shortestPath.push_back(i+1);
        }
       
        vector<int> ans;
        for(auto q: queries){
            adj[q[0]].push_back(q[1]);
            shortestPath[q[1]] = min(shortestPath[q[1]], shortestPath[q[0]] + 1);
            dfs(q[1], adj, shortestPath);
            ans.push_back(shortestPath[n-1]);
        }

        return ans;  
    }
};