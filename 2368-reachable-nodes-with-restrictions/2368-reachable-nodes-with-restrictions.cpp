class Solution {
public:
    void dfs(int node, unordered_map<int,vector<int>>& um, vector<bool>& visited, int &count){
        visited[node]=true;
        count++;
        for(auto currNode:um[node]){
            if(!visited[currNode]){
                dfs(currNode,um,visited,count);
            }
        }
    }

    void bfs(int node, unordered_map<int,vector<int>>& um, vector<bool>& visited, int &count){
        queue<int>q;
        q.push(0);
        visited[0]=true;
        count++;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto currNode:um[node]){
               if(!visited[currNode]){
                visited[currNode]=true;
                q.push(currNode);
                count++;
               }
            }
        }
    }
    
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
        unordered_map<int,vector<int>>um;
        for(auto edge:edges){
            um[edge[0]].push_back(edge[1]);
            um[edge[1]].push_back(edge[0]);
        }

        vector<bool>visited(n,false);
        for(auto res:restricted) visited[res]=true;
    
        int count=0;
        // bfs(0,um,visited,count);
        dfs(0,um,visited,count);
        return count;
    }
};