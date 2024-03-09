class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        for(auto el:nums2){
            if(binary_search(nums1.begin(),nums1.end(),el)) return el;
        }
        return -1;
    }
};