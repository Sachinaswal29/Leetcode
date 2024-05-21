class Solution {
public:
    void subset(vector<int>nums,int index, vector<int>temp,vector<vector<int>>& ans){
        if(index>=nums.size()){
            ans.push_back(temp);
            return;
        }
        subset(nums,index+1,temp,ans);
        temp.push_back(nums[index]);
        subset(nums,index+1,temp,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        subset(nums,0,temp,ans);
        return ans;
    }
};