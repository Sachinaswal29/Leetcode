class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n=nums.size();
        int XOR=0;
        for(auto &x:nums) XOR^=x;

        vector<int>ans;
        int mask=(1<<maximumBit)-1;
        
        for(int i=0;i<n;i++){
            int k=XOR^mask;
            ans.push_back(k);
            XOR^=nums[n-i-1];
        }
        return ans;
    }
};