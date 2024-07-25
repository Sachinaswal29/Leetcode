class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        // Counting Sort
        unordered_map<int,int>freq;
        for(auto& num:nums) freq[num]++;
        int maxi=*max_element(nums.begin(),nums.end());
        int mini=*min_element(nums.begin(),nums.end());
        int j=0;
        for(int i=mini;i<=maxi;i++){
            while(freq[i]--){
                nums[j++]=i;
            }
        }
        return nums;
    }
};