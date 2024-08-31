class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        vector<pair<int,double>>adj[n];
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back({edges[i][1],succProb[i]});
            adj[edges[i][1]].push_back({edges[i][0],succProb[i]});
        }
        vector<int>explored(n,0);
        vector<double>dist(n,0);
        dist[start_node]=1;
        priority_queue<pair<double,int>>pq;
        pq.push({1.0,start_node});
        while(!pq.empty()){
            int node=pq.top().second;
            pq.pop();
            if(explored[node]) continue;
            explored[node]=1;
            for(auto& neigh:adj[node]){
                int childNode=neigh.first;
                double childProb=neigh.second;
                if(!explored[childNode] && (dist[childNode]<childProb*dist[node])){
                    dist[childNode]=childProb*dist[node];
                    pq.push({dist[childNode],childNode});
                }
            }
        }
        return dist[end_node];
    }
};