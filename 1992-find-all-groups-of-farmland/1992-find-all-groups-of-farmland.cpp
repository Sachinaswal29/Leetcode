class Solution {
public:
    void dfs(vector<vector<int>>& land, int i, int j, int& max_i, int& max_j){
        if(i<0 || i>=land.size() || j<0 || j>=land[0].size() || land[i][j]==0) return;
        land[i][j]=0;
        max_i=max(i,max_i);
        max_j=max(j,max_j);
        dfs(land,i-1,j,max_i,max_j);
        dfs(land,i,j-1,max_i,max_j);
        dfs(land,i+1,j,max_i,max_j);
        dfs(land,i,j+1,max_i,max_j);
    }

    vector<vector<int>>directions{{-1,0},{1,0},{0,1},{0,-1}};
    void bfs(vector<vector<int>>& land, int i, int j, int& max_i, int& max_j){
       queue<pair<int,int>>q;
       q.push({i,j});
       land[i][j]=0;
       while(!q.empty()){
        auto it=q.front();
        q.pop();
        max_i=max(it.first,max_i);
        max_j=max(it.second,max_j);
        for(auto dir:directions){
            int new_i=it.first+dir[0];
            int new_j=it.second+dir[1];
            if(new_i<0 || new_i>=land.size() || new_j<0 || new_j>=land[0].size() || land[new_i][new_j]==0) continue;
            land[new_i][new_j]=0;
            q.push({new_i,new_j});
        }
       }
    }

    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>>ans;
        for(int i=0;i<land.size();i++){
            for(int j=0;j<land[0].size();j++){
                if(land[i][j]==1){
                    int max_i=i;
                    int max_j=j;
                    bfs(land,i,j,max_i,max_j);
                    ans.push_back({i,j,max_i,max_j});
                }
            }
        }
        return ans;
    }
};