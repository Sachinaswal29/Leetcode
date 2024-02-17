class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        stations.push_back({target,0});
        priority_queue<int>pq;
        int ans=0;
        for(int i=0;i<stations.size();i++){
            if(stations[i][0]>startFuel){
                while(startFuel<stations[i][0] && !pq.empty()){
                    startFuel+=pq.top();
                    pq.pop();
                    ans++;
                }
                if(stations[i][0]>startFuel) return -1;
            }
            pq.push(stations[i][1]);
        }
        return ans;
    }
};