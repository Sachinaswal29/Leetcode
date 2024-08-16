class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int small=arrays[0].front();
        int large=arrays[0].back();
        int maxDistance=INT_MIN;
        for(int i=1;i<arrays.size();i++){
            maxDistance=max({maxDistance,abs(large-arrays[i].front()),abs(arrays[i].back()-small)});
            small=min(small,arrays[i].front());
            large=max(large,arrays[i].back());
        }return maxDistance;
    }
};