class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<=n;i++){
            int count=n-(lower_bound(begin(nums),end(nums),i)-nums.begin());
            if(count==i) return i;
        }
        return -1;
    }
};