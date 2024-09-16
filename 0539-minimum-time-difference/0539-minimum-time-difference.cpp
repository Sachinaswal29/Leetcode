class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        // TC-O(NlogN)
        // vector<int>minutes(timePoints.size());
        // for(int i=0;i<timePoints.size();i++){
        //     int hour=stoi(timePoints[i].substr(0,2));
        //     int mint=stoi(timePoints[i].substr(3,2));
        //     minutes[i]=hour*60+mint;
        // }

        // int minDiff=INT_MAX;
        // sort(minutes.begin(),minutes.end());
        // for(int i=1;i<minutes.size();i++){
        //     minDiff=min(minDiff,minutes[i]-minutes[i-1]);
        // }

        // return min(minDiff,(24*60-minutes.back())+minutes.front());
   
        // TC-O(N)
        vector<int>minutes;
        vector<int>countSort(1440,0);
        for(int i=0;i<timePoints.size();i++){
            int hour=stoi(timePoints[i].substr(0,2));
            int mint=stoi(timePoints[i].substr(3,2));
            countSort[hour*60+mint]++;
        }

        for(int i=0;i<1440;i++){
            while(countSort[i]--){
                minutes.push_back(i);
            }
        }

        int minDiff=INT_MAX;
        for(int i=1;i<minutes.size();i++){
            minDiff=min(minDiff,minutes[i]-minutes[i-1]);
        }

        return min(minDiff,(24*60-minutes.back())+minutes.front());
    }
};