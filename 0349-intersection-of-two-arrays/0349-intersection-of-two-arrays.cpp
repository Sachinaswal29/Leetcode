class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int>s1(nums1.begin(),nums1.end());
    unordered_set<int>s2;
    for(auto i:nums2) {
       if(s1.contains(i)) s2.insert(i);
    } 
    vector<int>ans(s2.begin(),s2.end());
    return ans;
    }
};