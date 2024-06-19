class Solution {
public:
    bool isPoss(vector<int>& bloomDay, int mid, int m, int k){
        int count=0;
        for(auto x:bloomDay){
            if(x<=mid) count++;
            else count=0;
            if(count==k) {
                m--;
                count=0;
            }
        }
        return m<=0;
    }
    
    int minDays(vector<int>& bloomDay, int m, int k) {
        int start=0;
        int end=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(isPoss(bloomDay,mid,m,k)){
                ans=mid;
                end=mid-1;
            }else start=mid+1;
        }
        return ans;
    }
};