class Solution {
private:
    int dp[1001][1001];
    int solve(vector<vector<int>>& books, int i, int remWidth, int maxHeight, int shelfWidth){
        if(i>=books.size()) return maxHeight;
        if(dp[i][remWidth]!=-1) return dp[i][remWidth];
        int rakho=INT_MAX;
        int matRakho=INT_MAX;
        if(books[i][0]<=remWidth){
            rakho=solve(books,i+1,remWidth-books[i][0],max(maxHeight,books[i][1]),shelfWidth);
        }
        matRakho=maxHeight+solve(books,i+1,shelfWidth-books[i][0],books[i][1],shelfWidth);
        return dp[i][remWidth]=min(rakho,matRakho);
    }
    
public:
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
        memset(dp,-1,sizeof(dp));
        return solve(books,0,shelfWidth,0,shelfWidth);
    }
};