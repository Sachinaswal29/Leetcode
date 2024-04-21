class Solution {
public:
    bool dfs(unordered_map<int,vector<int>>& um, vector<bool>& visited, int source, int destination){
        if(source==destination) return true;
        if(visited[source]) return false;
        visited[source]=true;
        for(auto node:um[source]){
            if(dfs(um,visited,node,destination)) return true;
        }
        return false;
    }
    
    bool bfs(unordered_map<int,vector<int>>& um, vector<bool>& visited, int source, int destination){
        queue<int>q;
        q.push(source);
        visited[source]=true;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            if(node==destination) return true;
            for(auto i:um[node]){
               if(!visited[i]){
                q.push(i);
                visited[i]=true;
               }
            }
        }
        return false;
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>>um;
        for(auto x:edges){
            um[x[0]].push_back(x[1]);
            um[x[1]].push_back(x[0]);
        }
        vector<bool>visited(n,false);
        
        // return bfs(um,visited,source,destination);
        return dfs(um,visited,source,destination);
    }
};