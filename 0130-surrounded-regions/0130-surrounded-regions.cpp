class Solution {
public:
    void dfs(vector<vector<char>>& board, int i, int j){
       if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j]!='O') return;
       board[i][j]='s';
       dfs(board,i-1,j);
       dfs(board,i+1,j);
       dfs(board,i,j-1);
       dfs(board,i,j+1);
    }
    
    void solve(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++){
            int j=0;
            if(board[i][j]=='O') dfs(board,i,j);
            j=board[0].size()-1;
            if(board[i][j]=='O') dfs(board,i,j);
        }
        for(int j=0;j<board[0].size();j++){
            int i=0;
            if(board[i][j]=='O') dfs(board,i,j);
            i=board.size()-1;
            if(board[i][j]=='O') dfs(board,i,j);
        }

        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='O') board[i][j]='X';
                if(board[i][j]=='s') board[i][j]='O';
            }
        }
    }
};