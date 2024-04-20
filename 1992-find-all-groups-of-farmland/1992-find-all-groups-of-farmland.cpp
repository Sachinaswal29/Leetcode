class Solution {
public:
    void dfs(vector<vector<int>>& land, int i, int j, int& max_i, int& max_j){
        if(i<0 || i>=land.size() || j<0 || j>=land[0].size() || land[i][j]==0) return;
        land[i][j]=0;
        max_i=max(i,max_i);
        max_j=max(j,max_j);
        dfs(land,i-1,j,max_i,max_j);
        dfs(land,i,j-1,max_i,max_j);
        dfs(land,i+1,j,max_i,max_j);
        dfs(land,i,j+1,max_i,max_j);
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>>ans;
        for(int i=0;i<land.size();i++){
            for(int j=0;j<land[0].size();j++){
                if(land[i][j]==1){
                    vector<int>temp;
                    int max_i=i;
                    int max_j=j;
                    temp.push_back(i);
                    temp.push_back(j);
                    dfs(land,i,j,max_i,max_j);
                    temp.push_back(max_i);
                    temp.push_back(max_j);
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
};