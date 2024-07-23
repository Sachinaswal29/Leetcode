class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(auto &x:nums) freq[x]++;
        auto lambda=[&](int &num1, int& num2){
            if(freq[num1]==freq[num2]) return num1>num2;
            return freq[num1]<freq[num2];
        };
        sort(nums.begin(),nums.end(),lambda);
        return nums;
    }
};