class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(n==1) return{0};
        
        unordered_map<int,vector<int>>um;
        vector<int>indegree(n,0);
        for(auto&edge :edges){
            indegree[edge[0]]++;
            indegree[edge[1]]++;
            um[edge[0]].push_back(edge[1]);
            um[edge[1]].push_back(edge[0]);
        }

        queue<int>q;
        for(int i=0;i<n;i++){
            if(indegree[i]==1) q.push(i);
        }

        while(n>2){
            int size=q.size();
            n-=size;
            while(size--){
                int node=q.front();
                q.pop();
                for(auto &v:um[node]){
                    indegree[v]--;
                    if(indegree[v]==1) q.push(v);
                }
            }
        }

        vector<int>ans;
        while(!q.empty()){
            ans.push_back(q.front());
            q.pop();
        }
        return ans;
    }
};