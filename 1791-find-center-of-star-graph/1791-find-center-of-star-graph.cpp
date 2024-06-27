class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int>um;
        for(auto i:edges){
            um[i[0]]++;
            um[i[1]]++;
        }
        for(auto i:um){
            if(i.second==edges.size()) return i.first;
        }
        return 0;
    }
};