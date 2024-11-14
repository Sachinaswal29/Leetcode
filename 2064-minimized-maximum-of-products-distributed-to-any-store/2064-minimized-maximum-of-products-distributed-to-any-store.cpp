class Solution {
public:
    bool check(int n, vector<int>& quantities, int mid){
        int count=0;
        for(auto& q:quantities){
            count+=q/mid+(q%mid!=0);
        }
        return count<=n;
    }
    
    int minimizedMaximum(int n, vector<int>& quantities) {
        int start=1;
        int end=*max_element(quantities.begin(),quantities.end());
        int ans=0;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(check(n,quantities,mid)){
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return ans;
    }
};