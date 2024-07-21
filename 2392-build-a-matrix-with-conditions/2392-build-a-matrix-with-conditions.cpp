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
        vector<int>visited(n+1,0);
        stack<int>st;
        vector<int>ans;
        bool isCycle=false;
        for(int i=1;i<=n;i++){
            if(!visited[i]) dfs(i,adjList,visited,st,isCycle);
            if(isCycle) return {};
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }

    void dfs(int node,unordered_map<int,vector<int>>& adjList,vector<int>& visited, stack<int>&st, bool &isCycle){
        visited[node]=-1;
        for(auto &neighbour:adjList[node]){
            if(!visited[neighbour]){
                dfs(neighbour,adjList,visited,st,isCycle);
                if(isCycle) return; 
            } else if(visited[neighbour]==-1){ 
                isCycle=true;
                return;
            }
        }
        visited[node]=1; 
        st.push(node);
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