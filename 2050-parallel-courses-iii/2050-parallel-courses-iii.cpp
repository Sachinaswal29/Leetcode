class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        vector<int>adj[n];
        vector<int>indegree(n,0);
        for(auto& x:relations){
            adj[x[0]-1].push_back(x[1]-1);
            indegree[x[1]-1]++;
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(!indegree[i]) q.push(i);
        }
      
        vector<int>courseTime(n,0);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto& neigh:adj[node]){
                indegree[neigh]--;
                if(!indegree[neigh]){
                    q.push(neigh);
                }
                courseTime[neigh]=max(courseTime[neigh],courseTime[node]+time[node]);

            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,courseTime[i]+time[i]);
        }
        return ans;
    }
};