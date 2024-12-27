class Solution {
public:
    int halveArray(vector<int>& nums) {
        double sum=accumulate(nums.begin(),nums.end(),0.0);
        priority_queue<double>pq(nums.begin(),nums.end());
        double currSum=sum;
        int steps=0;
        while(currSum>sum/2){
            currSum-=pq.top()/2;
            pq.push(pq.top()/2);
            pq.pop();
            steps++;
        }
        return steps;
    }
};