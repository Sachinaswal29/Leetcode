class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n<3)return 0;
        int maxLeft=height[0];
        int maxRight=height[n-1];
        int left=1;
        int right=n-2;
        int trappedwater=0;
        while(left<=right){
            if(maxLeft<maxRight){
                if(height[left]>=maxLeft) maxLeft=height[left];
                else trappedwater+=maxLeft-height[left];
                left++; 
            }
            else{
                if(height[right]>=maxRight) maxRight=height[right];
                else trappedwater+=maxRight-height[right];
                right--;
            }
        }
        return trappedwater;
    }
};