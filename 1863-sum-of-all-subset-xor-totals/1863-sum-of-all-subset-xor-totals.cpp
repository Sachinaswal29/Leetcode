class Solution {
public:
    void solve(vector<int>& nums, vector<vector<int>>& subsets, vector<int>& temp, int index){
        if(index==nums.size()){
            subsets.push_back(temp);
            return;
        }
        solve(nums,subsets,temp,index+1);
        temp.push_back(nums[index]);
        solve(nums,subsets,temp,index+1);
    }
    
    int subsetXORSum(vector<int>& nums) {
        vector<vector<int>>subsets;
        vector<int>temp;
        solve(nums,subsets,temp,0);
        int ans=0;
        for(auto subset:subsets){
            int XOR=0;
            for(auto num:subset) XOR^=num;
            ans+=XOR;
        }
        return ans;
    }
};