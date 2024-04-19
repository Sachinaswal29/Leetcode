class Solution {
public:
    vector<vector<int>>directions{{0,1},{0,-1},{1,0},{-1,0}};
    void dfs(vector<vector<char>>& grid, int i, int j){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]!='1') return;
        grid[i][j]='s';
        for(auto& dir:directions){
            int new_i=i+dir[0];
            int new_j=j+dir[1];
            dfs(grid,new_i,new_j);
        }
    }

    void bfs(vector<vector<char>>& grid, int i, int j){
        queue<pair<int,int>>q;
        q.push({i,j});
        grid[i][j]='s';
        while(!q.empty()){
            auto front=q.front();
            q.pop();
            for(auto& dir:directions){
                int new_i=front.first+dir[0];
                int new_j=front.second+dir[1];
                if(new_i<0 || new_i>=grid.size() || new_j<0 || new_j>=grid[0].size() || grid[new_i][new_j]!='1') continue;
                else{
                    q.push({new_i,new_j});
                    grid[new_i][new_j]='s';
                }
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    bfs(grid,i,j);
                    count++;
                }
            }
        }
        return count;
    }
};