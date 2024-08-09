class Solution {
public:
    bool isValid(vector<vector<int>>& grid, int i, int j){
        set<int> s({1,2,3,4,5,6,7,8,9});
        for(int k = 0 ; k < 3 ; k++){
            for(int l = 0; l < 3 ; l++){
                s.erase(grid[i + k][j + l]);
            }
        }
        if(!s.empty()) return false;

        int row1 = grid[i][j] + grid[i][j+1] + grid[i][j+2];
        int row2 = grid[i+1][j] + grid[i+1][j+1] + grid[i+1][j+2];
        int row3 = grid[i+2][j] + grid[i+2][j+1] + grid[i+2][j+2];
        int col1 = grid[i][j] + grid[i+1][j] + grid[i+2][j];
        int col2 = grid[i][j+1] + grid[i+1][j+1] + grid[i+2][j+1];
        int col3 = grid[i][j+2] + grid[i+1][j+2] + grid[i+2][j+2];
        int diag1 = grid[i][j] + grid[i+1][j+1] + grid[i+2][j+2];
        int diag2 = grid[i+2][j] + grid[i+1][j+1] + grid[i][j+2];

        if((row1 == row2) &&  (row1 == row3) &&(row1 == col1) &&(row1 == col2) && (row1 == col3) &&(row1 == diag1) &&(row1 == diag2)) {
            return true;
        }
        return false;
    }

    int numMagicSquaresInside(vector<vector<int>>& grid) {
        if(grid.size()<3 || grid[0].size()<3) return 0;
        int count=0;
        for(int row=0;row<grid.size()-2;row++){
            for(int col=0;col<grid[0].size()-2;col++){
                if(isValid(grid,row,col)) count++;
            }
        }
        return count;
    }
};