class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++){
            string s=to_string(nums[i]);
            string temp="";
            for(int i=0;i<s.size();i++){
                temp+=to_string(mapping[s[i]-'0']);
            }
            v.push_back({stoi(temp),i});
        }
       
        sort(v.begin(),v.end());
        vector<int>ans;
        for(auto& num:v){
            ans.push_back(nums[num.second]);
        }
        return ans;
    }
};