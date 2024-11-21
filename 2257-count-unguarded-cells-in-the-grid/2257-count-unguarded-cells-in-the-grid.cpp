class Solution {
public:
    void dfs(vector<vector<int>>& matrix, int row, int col){
        for(int i=row-1;i>=0;i--){
            if(matrix[i][col]==1 || matrix[i][col]==2) break;
            matrix[i][col]=-1;
        }
        
        for(int i=row+1;i<matrix.size();i++){
            if(matrix[i][col]==1 || matrix[i][col]==2) break;
            matrix[i][col]=-1;
        }
        
        for(int j=col-1;j>=0;j--){
            if(matrix[row][j]==1 || matrix[row][j]==2) break;
            matrix[row][j]=-1;
        }
        
        for(int j=col+1;j<matrix[0].size();j++){
            if(matrix[row][j]==1 || matrix[row][j]==2) break;
            matrix[row][j]=-1;
        }
    }
    
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>>matrix(m,vector<int>(n,0));
        for(auto& g:guards){
            matrix[g[0]][g[1]]=1;
        }
        for(auto& w:walls){
            matrix[w[0]][w[1]]=2;
        }

        for(auto& guard:guards){
            dfs(matrix,guard[0],guard[1]);
        }

        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0) ans++;
            }
        }
        return ans;
    }
};