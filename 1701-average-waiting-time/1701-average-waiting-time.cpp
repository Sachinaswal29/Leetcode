class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double totalWaitingTime=0;
        int curTime=0;
        for(auto x:customers){
            int arrivalTime=x[0];
            int cookTime=x[1];
            if(curTime< arrivalTime) curTime=arrivalTime;
            int waitTime=curTime+cookTime-arrivalTime;
            totalWaitingTime+=waitTime;
            curTime+=cookTime;
        }
        return totalWaitingTime/customers.size();
    }
};