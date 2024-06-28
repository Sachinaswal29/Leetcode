class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int>degree(n,0);
        for(auto x:roads){
            degree[x[0]]++;
            degree[x[1]]++;
        }
        sort(degree.begin(),degree.end());
        long long num=1;
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=(degree[i]*num);
            num++;
        }
        return sum;
    }
};