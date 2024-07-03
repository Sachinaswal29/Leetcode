class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n=nums.size();
        if(n<=4) return 0;
        priority_queue<int>maxHeap;
        priority_queue<int,vector<int>,greater<int>>minHeap;
        for(auto x:nums){
            maxHeap.push(x);
            minHeap.push(x);
            if(maxHeap.size()>4) maxHeap.pop();
            if(minHeap.size()>4) minHeap.pop();
        }
        int l=3,r=n-4;
        while(!maxHeap.empty()){
            nums[l--]=maxHeap.top();
            maxHeap.pop();
            nums[r++]=minHeap.top();
            minHeap.pop();
        }
        return min({nums[n-4]-nums[0],nums[n-1]-nums[3],nums[n-2]-nums[2],nums[n-3]-nums[1]});
    }
};