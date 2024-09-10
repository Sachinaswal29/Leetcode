class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>adj[numCourses];
        vector<int>inDegree(numCourses,0);
        for(auto& x:prerequisites){
            adj[x[1]].push_back(x[0]);
            inDegree[x[0]]++;
        }
        queue<int>q;
        for(int i=0;i<numCourses;i++){
            if(!inDegree[i]) q.push(i);
        }
        vector<int>ans;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(auto& neigh:adj[node]){
                inDegree[neigh]--;
                if(!inDegree[neigh]) q.push(neigh);
            }
        }
        if(ans.size()==numCourses) return ans; 
        else return {};
    }
};