class Solution {
public:
    pair<int,int>findCoordinates(int val, int n){
        int row=(n-1)-(val-1)/n;
        int col=(val-1)%n;
        if((n%2 && row%2) || (n%2==0 && row%2==0)) col=(n-1)-col;
        return {row,col};
    }

    int snakesAndLadders(vector<vector<int>>& board) {
        int n=board.size();
        vector<vector<int>>visited(n,vector<int>(n,0));
        visited[n-1][0]=1;
        queue<int>q;
        q.push(1);
        int steps=0;
        
        while(!q.empty()){
            int size=q.size();
            while(size--){
                int x=q.front();
                q.pop();
                if(x==n*n) return steps;
                for(int i=1;i<=6;i++){
                    if(x+i>n*n) break;
                    int val=x+i;
                    pair<int,int>coord=findCoordinates(val,n);
                    int row=coord.first;
                    int col=coord.second;
                    if(visited[row][col]) continue;
                    visited[row][col]=1;
                    if(board[row][col]==-1) q.push(val);
                    else q.push(board[row][col]);
                }
            }
            steps++;
        }return -1;
    }
};