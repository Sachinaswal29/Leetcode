class Solution {
private:
    int findMax(vector<vector<int>>& grid, int row, int col){
        int maxi=INT_MIN;
        for(int i=row;i<=row+2;i++){
            for(int j=col;j<=col+2;j++){
                maxi=max(maxi,grid[i][j]);
            }
        }
        return maxi;
    }
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>>maxLocal(n-2,vector<int>(n-2));
        for(int row=0;row<n-2;row++){
            for(int col=0;col<n-2;col++){
                maxLocal[row][col]=findMax(grid,row,col);
            }
        }
        return maxLocal;
    }
};