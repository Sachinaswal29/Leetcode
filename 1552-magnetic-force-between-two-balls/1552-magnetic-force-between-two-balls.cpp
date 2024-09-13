class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int start=0,end=position.back()-position.front();
        int ans=0;
        while(start<=end){
            int mid=start+(end-start)/2;
            int count=1,startPos=position.front();
            for(auto& pos:position){
                if(startPos+mid<=pos){
                    count++;
                    startPos=pos;
                }
            }
            if(count>=m){
                ans=mid;
                start=mid+1;
            }
            else end=mid-1;
        }
        return ans;
    }
};