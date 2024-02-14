class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int posIndex=0;
        int negIndex=1;
        vector<int>ans(nums.size(),0);
        for(auto el:nums){
            if(el>0){
                ans[posIndex]=el;
                posIndex+=2;
            }else{
                ans[negIndex]=el;
                negIndex+=2;
            }
        }
        return ans;
    }
};