class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int i=0,j=0;
        int maxi=INT_MIN;
        multiset<int>s;
        while(j<nums.size()){
            s.insert(nums[j]);
            int diff=*s.rbegin()-*s.begin();
            while(i<j && diff>limit){
                auto it=s.find(nums[i]);
                s.erase(it);
                diff=*s.rbegin()-*s.begin();
                i++;
            }
            maxi=max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};