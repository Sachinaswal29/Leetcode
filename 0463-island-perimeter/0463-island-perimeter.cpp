class Solution {
public:
    // int perimeter;
    // vector<vector<int>>directions{{0,-1},{0,1},{1,0},{-1,0}};
    // void dfs(vector<vector<int>>& grid, int i, int j){
    //     if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]==0 ){
    //         perimeter++;
    //         return;
    //     }
    //     if(grid[i][j]==-1) return;
        
    //     grid[i][j]=-1;
    //     for(auto& dir:directions){
    //         int new_i=i+dir[0];
    //         int new_j=j+dir[1];
    //         dfs(grid,new_i,new_j);
    //     }
    // }
    
    // int bfs(vector<vector<int>>& grid, int i, int j){
    //     queue<pair<int,int>>q;
    //     q.push({i,j});
    //     grid[i][j]=-1;
    //     int perimeter=0;
    //     while(!q.empty()){
    //         auto it=q.front();
    //         q.pop();
    //         for(auto& dir:directions){
    //             int new_i=it.first+dir[0];
    //             int new_j=it.second+dir[1];
    //             if(new_i<0 || new_i>=grid.size() || new_j<0 || new_j>=grid[0].size() || grid[new_i][new_j]==0) perimeter++;
    //             else if(grid[new_i][new_j]==-1) continue;
    //             else {
    //                 q.push({new_i,new_j});
    //                 grid[new_i][new_j]=-1;
    //             }
    //         }
    //     }
    //     return perimeter;
    // }
    
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    // dfs(grid,i,j);
                    // return perimeter;
                    // return bfs(grid,i,j);
                    if(i-1<0 || grid[i-1][j]==0) perimeter++;
                    if(i+1>=grid.size() || grid[i+1][j]==0) perimeter++;
                    if(j-1<0 || grid[i][j-1]==0) perimeter++;
                    if(j+1>=grid[0].size() || grid[i][j+1]==0) perimeter++;
                }
            }
        }
        return perimeter;
    }
};