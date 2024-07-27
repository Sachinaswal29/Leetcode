class Solution {
public:
    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        vector<vector<long long>>mat(26,vector<long long>(26,INT_MAX));
        for(int i=0;i<original.size();i++){
            mat[original[i]-'a'][changed[i]-'a']=min(mat[original[i]-'a'][changed[i]-'a'],(long long)cost[i]);
        }
        for(int via=0;via<26;via++){
            for(int i=0;i<26;i++){
                for(int j=0;j<26;j++){
                    mat[i][j]=min(mat[i][j],mat[i][via]+mat[via][j]);
                }
            }
        }
        long long maxCost=0;
        for(int i=0;i<source.size();i++){
            if(source[i]!=target[i]) {
                if(mat[source[i]-'a'][target[i]-'a']==INT_MAX) return -1;
                maxCost+=mat[source[i]-'a'][target[i]-'a'];
            }
        }
        return maxCost;
    }
};