class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int>temp=nums;
        sort(temp.begin(),temp.end(),greater<int>());
        int j=0;
        for(int i=1;i<temp.size();i+=2) nums[i]=temp[j++];
        for(int i=0;i<temp.size();i+=2) nums[i]=temp[j++];
    }
};