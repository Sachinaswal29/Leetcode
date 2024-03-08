class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int>count(101,0);
        int maxi=INT_MIN;
        for(auto el:nums){
            count[el]++;
            maxi=max(maxi,count[el]);
        }
        int ans=0;
        for(int i=0;i<101;i++){
           if(count[i]==maxi){
               ans+=count[i];
           }
        }
        return ans;
    }
};