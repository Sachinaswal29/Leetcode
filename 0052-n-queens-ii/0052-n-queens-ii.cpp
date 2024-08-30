class Solution {
public:
    bool isSafe(int row, int col, vector<int>temp){
        int r=row,c=col;
        while(r>=0 && c>=0){
            if(temp[r]==c+1) return false;
            r--;
            c--;
        }
        r=row,c=col;
        while(r>=0){
            if(temp[r]==c+1) return false;
            r--;
        }
        r=row,c=col;
        while(r>=0 && c<temp.size()){
            if(temp[r]==c+1) return false;
            r--;
            c++;
        }
        return true;
    }
    
    void solve(int n, int row, vector<int>temp, int& ans){
        if(row==n){
            ans++;
            return;
        }
        for(int col=0;col<n;col++){
            if(isSafe(row,col,temp)) {
                temp[row]=col+1;
                solve(n,row+1,temp,ans);
                temp[row]=0;
            }
        }
    }
    
    int totalNQueens(int n) {
        int ans=0;
        vector<int>temp(n,0);
        solve(n,0,temp,ans);
        return ans;
    }
};