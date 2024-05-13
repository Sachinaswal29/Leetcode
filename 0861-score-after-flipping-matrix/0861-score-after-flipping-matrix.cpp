class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        for(int row=0;row<m;row++){
            if(grid[row][0]==0) {
               for(int i=0;i<n;i++) grid[row][i]=1-grid[row][i];
            }
        }
        for(int col=1;col<n;col++){
            int zeroCount=0;
            for(int row=0;row<m;row++){
                if(grid[row][col]==0) zeroCount++;
            }
            if(zeroCount>m-zeroCount){
                for(int j=0;j<m;j++) grid[j][col]=1-grid[j][col];
            }
        }
        int maxScore=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                maxScore+=grid[i][j]*pow(2,n-j-1);
            }
        }
        return maxScore;
    }
};