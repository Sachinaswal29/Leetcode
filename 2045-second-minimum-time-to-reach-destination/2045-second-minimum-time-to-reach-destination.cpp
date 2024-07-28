class Solution {
public:
    int secondMinimum(int n, vector<vector<int>>& edges, int time, int change) {
        unordered_map<int,vector<int>>adj;
        for(auto& edge:edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        vector<int>d1(n+1,INT_MAX);
        vector<int>d2(n+1,INT_MAX);
        queue<pair<int,int>>q;
        q.push({1,1});
        d1[1]=0;
        while(!q.empty()){
            int node=q.front().first;
            int freq=q.front().second;
            q.pop();
            int timepassed=freq==1 ? d1[node] : d2[node];
            if(node==n && d2[n]!=INT_MAX) return d2[n];
            int div=timepassed/change;
            if(div%2==1) timepassed=change*(div+1);
            for(auto& neigh:adj[node]){
                if(d1[neigh]==INT_MAX){
                    d1[neigh]=timepassed+time;
                    q.push({neigh,1});
                }else if(d2[neigh]==INT_MAX && d1[neigh]!=timepassed+time){
                    d2[neigh]=timepassed+time;
                    q.push({neigh,2});
                }
            }
        }
        return -1;
    }
};