class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int>lost;
        vector<int>notLost,lostOnce;

        for(auto m:matches){
            lost[m[1]]++;
        }

        for(auto m:matches){
            if(lost.find(m[0])==lost.end()) {
                notLost.push_back(m[0]);
                lost[m[0]]=2;
            }
            if(lost[m[1]]==1) lostOnce.push_back(m[1]);
        }

        sort(notLost.begin(),notLost.end());
        sort(lostOnce.begin(),lostOnce.end());
        
        return {notLost,lostOnce};
    }
};