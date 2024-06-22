class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int oddCount=0;
        int prevCount=0;
        int ans=0;
        int i=0,j=0;
        while(j<nums.size()){
            if(nums[j]%2){
                oddCount++;
                prevCount=0;
            }
            while(i<nums.size() && oddCount==k){
                prevCount++;
                if(nums[i]%2) oddCount--;
                i++;
            }
            ans+=prevCount;
            j++;
        }
        return ans;
    }
};