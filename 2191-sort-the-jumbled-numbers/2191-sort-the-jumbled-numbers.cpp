class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++){
            int newNum=0;
            if(nums[i]<10) newNum=mapping[nums[i]];
            else{
                int num=nums[i];
                int placeValue=1;
                while(num){
                    int rem=num%10;
                    int mappedNum=mapping[rem];
                    newNum+=(mappedNum*placeValue);
                    num/=10;
                    placeValue*=10;
                }
             }
             v.push_back({newNum,i});
        }
       
        sort(v.begin(),v.end());
        vector<int>ans;
        for(auto& num:v){
            ans.push_back(nums[num.second]);
        }
        return ans;
    }
};