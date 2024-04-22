class Solution {
public:
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
        unordered_map<int,vector<int>>um;
        for(auto edge:edges){
            um[edge[0]].push_back(edge[1]);
            um[edge[1]].push_back(edge[0]);
        }

        vector<bool>visited(n,false);
        for(auto res:restricted) visited[res]=true;
        queue<int>q;
        q.push(0);
        int count=1;
        visited[0]=true;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto i:um[node]){
               if(!visited[i]){
                visited[i]=true;
                q.push(i);
                count++;
               }
            }
        }
        return count;
    }
};