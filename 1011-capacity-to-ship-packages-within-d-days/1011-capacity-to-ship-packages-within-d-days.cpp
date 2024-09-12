class Solution {
public:
    bool isMin(vector<int>& weights, int mid, int days){
        int sum=0;
        int count=1;
        for(auto& x:weights){
            if(sum+x<=mid){
                sum+=x;
            }else{
                count++;
                sum=x;
            }
        }
        return count<=days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int start=*max_element(weights.begin(),weights.end());
        int end=accumulate(weights.begin(),weights.end(),0);
        int ans=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(isMin(weights,mid,days)){
                ans=mid;
                end=mid-1;
            }else start=mid+1;
        }return ans;
    }
};