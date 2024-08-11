class Solution {
public:
    vector<vector<int>>directions={{0,1},{1,0},{0,-1},{-1,0}};
    void solve(vector<vector<int>>& grid, int i, int j,  vector<vector<bool>>& visited){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]==0 || visited[i][j]) return;
        visited[i][j]=true;
        for(auto& dir:directions){
            int new_i=i+dir[0];
            int new_j=j+dir[1];
            solve(grid,new_i,new_j,visited);
        }

    }
    
    int isLands(vector<vector<int>>& grid){
        int count=0;
        vector<vector<bool>> visited(grid.size(),vector<bool>(grid[0].size(),false));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1 && !visited[i][j]){
                    solve(grid,i,j,visited);
                    count++;
                }
            }
        }
        return count;
    }
    
    int minDays(vector<vector<int>>& grid) {
        int noOfIsland=isLands(grid);
        if(noOfIsland==0 || noOfIsland>1) return 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    grid[i][j]=0;
                    noOfIsland=isLands(grid);
                    if(noOfIsland==0 || noOfIsland>1) return 1;
                    grid[i][j]=1;
                }
            }
        }
        return 2;
    }
};