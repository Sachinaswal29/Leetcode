class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        //using Two pass 
        // vector<int>count(101,0);
        // int maxi=INT_MIN;
        // for(auto el:nums){
        //     count[el]++;
        //     maxi=max(maxi,count[el]);
        // }
        // int ans=0;
        // for(int i=0;i<101;i++){
        //    if(count[i]==maxi){
        //        ans+=count[i];
        //    }
        // }
        // return ans;

        // Using one pass
        vector<int>count(101,0);
        int maxFreq=0;
        int ans=0;
        for(auto el:nums){
            count[el]++;
            if(maxFreq<count[el]){
                maxFreq=count[el];
                ans=maxFreq;
            }
            else if(maxFreq==count[el]) ans+=maxFreq;
        }return ans;
    }
};