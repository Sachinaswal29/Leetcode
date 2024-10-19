class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        sort(properties.begin(), properties.end(), [](vector<int>& a, vector<int>& b) {
            if (a[0] == b[0]) return a[1] < b[1]; 
            return a[0] > b[0]; 
        });

        int ans = 0;
        int maxDefense = INT_MIN;

        for (const auto& p : properties) {
            if (p[1] < maxDefense) ans++;
            maxDefense = max(maxDefense, p[1]);
        }
        return ans;
    }
};