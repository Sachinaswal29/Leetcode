class Solution {
public:
    vector<vector<int>>directions={{0,1},{1,0},{0,-1},{-1,0}};
    
    bool bfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2, int i, int j){
        queue<pair<int,int>>q;
        q.push({i,j});
        grid2[i][j]=0;
        bool ans=true;
        while(!q.empty()){
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            if(grid1[i][j]!=1) ans=false; 
            for(auto& dir:directions){
                int new_i=i+dir[0];
                int new_j=j+dir[1];
                if(new_i>=0 && new_i<grid1.size() && new_j>=0 && new_j<grid1[0].size() && grid2[new_i][new_j]==1){
                    grid2[new_i][new_j]=0;
                    q.push({new_i,new_j});
                }
            }
        }
        return ans;
    }
    
    bool dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2, int i, int j){
        if(i<0 || i>=grid1.size() || j<0 || j>=grid1[0].size() || grid2[i][j]!=1) return true;
        grid2[i][j]=0;
        bool ans=grid1[i][j]==1;
        for(auto &dir:directions){
            ans= ans & dfs(grid1,grid2,i+dir[0],j+dir[1]);
        }
        return ans;
    }
    
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int count=0;
        for(int i=0;i<grid2.size();i++){
            for(int j=0;j<grid2[0].size();j++){
                if(grid2[i][j]==1 && bfs(grid1,grid2,i,j)) count++;
            }
        }
        return count;
    }
};