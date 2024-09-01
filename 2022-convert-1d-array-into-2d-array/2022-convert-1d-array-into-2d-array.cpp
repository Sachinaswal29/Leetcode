class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if(original.size()!=m*n) return {};
        vector<vector<int>>ans(m,vector<int>(n,0));
        int idx=0; // Method 1
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[i][j]=original[idx++];
            }
        }
        // for(int i=0;i<original.size();i++){ // Method 2
        //     ans[i/n][i%n]=original[i];
        // }
        return ans;
    }
};