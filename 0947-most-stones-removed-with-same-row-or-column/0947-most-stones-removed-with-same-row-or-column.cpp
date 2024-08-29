class Solution {
public:
    void dfs(vector<vector<int>>& stones, int index, vector<int>& visited){
        visited[index]=1;
        for(int i=0;i<stones.size();i++){
            if(!visited[i] && (stones[i][0]==stones[index][0] || stones[i][1]==stones[index][1]))                                          dfs(stones,i,visited);
        }
    }
    
    int removeStones(vector<vector<int>>& stones) {
        int n=stones.size();
        vector<int>visited(n,0);
        int count=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(stones,i,visited);
                count++;
            }
        }
        return n-count;
    }
};