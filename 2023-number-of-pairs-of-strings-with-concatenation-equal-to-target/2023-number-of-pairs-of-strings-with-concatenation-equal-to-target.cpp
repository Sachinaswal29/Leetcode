class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        // TC->   O(N2)
        // int count=0;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=0;j<nums.size();j++){
        //         if(i!=j && nums[i]+nums[j]==target) count++;
        //     }
        // }
        // return count;
        
        unordered_map<string,int>um;
        for(auto s:nums) um[s]++;
        int count=0;
        for(int i=1;i<target.size();i++){
            string first=target.substr(0,i);
            string second=target.substr(i);
            if(first==second) count+=um[first]*(um[second]-1);
            else count+=um[first]*um[second];
        }
        return count;
    }
};