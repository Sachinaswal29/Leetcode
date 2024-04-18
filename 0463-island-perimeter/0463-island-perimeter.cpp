class Solution {
public:
    int perimeter;
    vector<vector<int>>directions{{0,-1},{0,1},{1,0},{-1,0}};
    void solve(vector<vector<int>>& grid, int i, int j){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]==0 ){
            perimeter++;
            return;
        }
        if(grid[i][j]==-1) return;
        
        grid[i][j]=-1;
        for(auto& dir:directions){
            int new_i=i+dir[0];
            int new_j=j+dir[1];
            solve(grid,new_i,new_j);
        }
    }
    
    int islandPerimeter(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    solve(grid,i,j);
                    return perimeter;
                }
            }
        }
        return -1;
    }
};