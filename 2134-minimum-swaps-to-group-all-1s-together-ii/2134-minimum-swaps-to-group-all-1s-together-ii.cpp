class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        int totalOnes=count(nums.begin(),nums.end(),1);
        int i=0;
        int curOnes=0;
        int maxOnes=0;
        for(int j=0;j<2*n;j++){
            if(nums[j%n]==1) curOnes++;
            if(j>=totalOnes-1){
               maxOnes=max(maxOnes,curOnes);
               curOnes-=nums[i%n];
               i++;
            }
        }
        return totalOnes-maxOnes;
    }
};