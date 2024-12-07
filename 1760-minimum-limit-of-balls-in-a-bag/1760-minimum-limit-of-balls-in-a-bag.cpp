class Solution {
public:
    int find(vector<int>& nums, int mid){
        int op=0;
        for(auto& x:nums) op+=(x-1)/mid;
        return op;
    }
    
    int minimumSize(vector<int>& nums, int maxOperations) {
        int start=1;
        int end=*max_element(nums.begin(),nums.end());
        while(start<=end){
            int mid=start+(end-start)/2;
            int op=find(nums,mid);
            if(op > maxOperations) start=mid+1;
            else end=mid-1;
        }
        return start;
    }
};