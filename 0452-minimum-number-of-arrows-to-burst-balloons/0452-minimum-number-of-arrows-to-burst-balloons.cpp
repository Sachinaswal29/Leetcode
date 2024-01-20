class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int arrowCounts=1;
        vector<int>prev=points[0];

        for(int i=1;i<points.size();i++){
            int curStart=points[i][0];
            int curEnd=points[i][1];
            int prevStart=prev[0];
            int prevEnd=prev[1];
            if(curStart>prevEnd){
                arrowCounts++;
                prev=points[i];
            }else{
                prev[0]=max(prevStart,curStart);
                prev[1]=min(prevEnd,curEnd);
            }
        }return arrowCounts;
    }
};