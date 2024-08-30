class Solution {
public:
    int Dijkstra(int n, vector<vector<int>>& edges, int source, int destination){
        vector<pair<int,int>>adj[n];
        for(auto& x:edges){
            if(x[2]!=-1){
            adj[x[0]].push_back({x[1],x[2]});
            adj[x[1]].push_back({x[0],x[2]});
            }
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,source});
        vector<int>explored(n,0);
        vector<int>dist(n,INT_MAX);
        dist[source]=0;
        while(!pq.empty()){
            int node=pq.top().second;
            pq.pop();
            if(explored[node]) continue;
            explored[node]=1;
            for(auto& neigh:adj[node]){
                int weight=neigh.second;
                int neighbour=neigh.first;
                if(!explored[neighbour] && (dist[neighbour]>dist[node]+weight)){
                    dist[neighbour]=dist[node]+weight;
                    pq.push({dist[neighbour],neighbour});
                }
            }
        }
        return dist[destination];
    }
    
    vector<vector<int>> modifiedGraphEdges(int n, vector<vector<int>>& edges, int source, int destination, int target) {
        long long shortestPath=Dijkstra(n,edges,source,destination);
        if(shortestPath<target) return {}; // If there already exist a shortest path
        bool matchedTarget=shortestPath==target;
        // if(matchedTarget){   // if shortest path is equal to the target then change only negative weight to 2e9
        //     for(auto& edge:edges){
        //         if(edge[2]==-1) edge[2]=2e9;
        //     }
        //     return edges;
        // }
        for(auto& edge:edges){   // If shortest path is greater than target than change negative weight to 1 one by one until the shortest path becomes equal to target.. 
            if(edge[2]==-1){
                edge[2]=(matchedTarget) ? 2e9 : 1;  // It will also handle the condition when shortest path will becomes equals to target.
                if(!matchedTarget){
                    long long newShortestPath=Dijkstra(n,edges,source,destination);
                    if(newShortestPath<=target){
                        matchedTarget=true;
                        edge[2]+=target-newShortestPath;
                    }
                }
            }
        }
        if(!matchedTarget) return {};
        return edges;
    }
};