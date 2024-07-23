class Solution {
private:
    unordered_map<int,vector<int>> makeGraph(vector<vector<int>>& v){
        unordered_map<int,vector<int>>adjList;
        for(auto &x:v){
            adjList[x[0]].push_back(x[1]);
        }
        return adjList;
    }

    vector<int> topo(unordered_map<int, vector<int>>& adjList, int n){
        vector<int>ans;
        vector<int>indegree(n+1,0);
        for(int i=1;i<=n;i++){
           for(auto& neigh:adjList[i]) indegree[neigh]++;
        }
       queue<int>q;
       for(int i=1;i<=n;i++){
           if(indegree[i]==0) q.push(i);
       }
       while(!q.empty()){
           int node=q.front();
           q.pop();
           ans.push_back(node);
           for(auto& neigh:adjList[node]){
               indegree[neigh]--;
               if(indegree[neigh]==0) q.push(neigh);
           }
       }
       if(ans.size()==n) return ans;
       return {};
    }

public:
    vector<vector<int>> buildMatrix(int k, vector<vector<int>>& rowConditions, vector<vector<int>>& colConditions) {
        unordered_map<int,vector<int>>rowOrder=makeGraph(rowConditions);
        unordered_map<int,vector<int>>colOrder=makeGraph(colConditions);
        vector<int>topoRow=topo(rowOrder,k);
        vector<int>topoCol=topo(colOrder,k);
        if(topoRow.empty() || topoCol.empty()) return {};
        vector<vector<int>>ans(k,vector<int>(k,0));
        unordered_map<int,int>rowIndex,colIndex;
        for(int i=0;i<k;i++){
            rowIndex[topoRow[i]]=i;
            colIndex[topoCol[i]]=i;
        }
        for(int i=1; i<=k;i++){
            ans[rowIndex[i]][colIndex[i]]=i;
        }
        return ans;
    }
};