class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int totalXor=0;
        for(auto &el:nums) totalXor^=el;
        int diff=totalXor^k;
        return __builtin_popcount(diff);
    }
};