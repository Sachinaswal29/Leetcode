class Solution {
private:
    int binary_Search(vector<int>& temp, int target){
        int start=0,end=temp.size()-1;
        int index=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(temp[mid]==target){
                index=mid;
                end=mid-1;
            }else if(temp[mid]<target) start=mid+1;
            else end=mid-1;
        }
        return index;
    }
public:
    vector<int> countSmaller(vector<int>& nums) {
        vector<int>ans;
        vector<int>temp=nums;
        sort(temp.begin(),temp.end());
        for(int i=0;i<nums.size();i++){
            int index=binary_Search(temp,nums[i]);
            ans.push_back(index);
            temp.erase(temp.begin()+index);
        }
        return ans;
    }
};