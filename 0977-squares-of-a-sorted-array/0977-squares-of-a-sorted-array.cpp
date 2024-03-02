class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=n-1,k=n-1;
        vector<int>v(n);
        while(i<=j){
            if(abs(nums[i])<abs(nums[j])){
               v[k--]=nums[j]*nums[j];
               j--;
            }
            else{
                v[k--]=nums[i]*nums[i];
                i++;
            }
        }
        return v;
    }
};