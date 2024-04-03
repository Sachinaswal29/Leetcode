class Solution {
public:
    vector<vector<int>>directions{{0,1},{1,0},{0,-1},{-1,0}};
    bool solve(vector<vector<char>>& board, int i, int j, string &word, int idx){
        if(idx==word.size()) return true;
        if(i<0 || i>=board.size() || j<0 || j>=board[i].size() || board[i][j]=='#' || board[i][j]!=word[idx]) return false;
        char temp=board[i][j];
        board[i][j]='#';
        for(auto &dir:directions){
            int new_i=i+dir[0];
            int new_j=j+dir[1];
            if(solve(board,new_i,new_j,word, idx+1)) return true;
        }
        board[i][j]=temp;
        return false;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                if(board[i][j]==word[0] && solve(board,i,j,word,0)) return true;
            }
        }
        return false;
    }
};