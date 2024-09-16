class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>minutes(timePoints.size());
        for(int i=0;i<timePoints.size();i++){
            int hour=stoi(timePoints[i].substr(0,2));
            int mint=stoi(timePoints[i].substr(3,2));
            minutes[i]=hour*60+mint;
        }

        int minDiff=INT_MAX;
        sort(minutes.begin(),minutes.end());
        for(int i=1;i<minutes.size();i++){
            minDiff=min(minDiff,minutes[i]-minutes[i-1]);
        }

        return min(minDiff,(24*60-minutes.back())+minutes.front());
    }
};