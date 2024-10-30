class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
        int n=nums.size();
        vector<int>lis(n,1);
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]) lis[i]=max(lis[i],1+lis[j]);
            }
        }
       
        vector<int>lds(n,1);
        for(int i=n-1;i>=0;i--){
            for(int j=n-1;j>i;j--){
                if(nums[i]>nums[j]) lds[i]=max(lds[i],1+lds[j]);
            }
        }

        int minRemoval=INT_MAX;
        for(int i=0;i<n;i++){
            if(lis[i]>1 && lds[i]>1) minRemoval=min(minRemoval,n-lis[i]-lds[i]+1);
        }
        return minRemoval;
    }
};