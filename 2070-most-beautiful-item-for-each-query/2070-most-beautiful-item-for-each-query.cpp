class Solution {
public:
    int binarysearch(vector<vector<int>>& items, int target){
        int start=0, end=items.size()-1, maxBeauty=0;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(items[mid][0] > target) {
                end=mid-1;
            }else {
                maxBeauty=max(maxBeauty,items[mid][1]);
                start=mid+1;
            }
        }
        return maxBeauty;
    }

    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        int n=items.size();
        int m=queries.size();
        sort(items.begin(),items.end());
        int maxBeauty=items[0][1];
        for(int i=1;i<n;i++){
             maxBeauty=max(items[i][1],maxBeauty);
             items[i][1]=maxBeauty;
        }
        vector<int>ans;
        for(auto &q:queries){
           ans.push_back(binarysearch(items,q));
        }
        return ans;
    }
};