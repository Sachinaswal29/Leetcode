class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>left(n,-1);
        vector<int>right(n,n);
        stack<int>st;
        
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[i]<heights[st.top()]){
                left[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()) st.pop();

        for(int i=0;i<n;i++){
            while(!st.empty() && heights[i]<heights[st.top()]){
                right[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }

        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            ans=max(ans,heights[i]*(right[i]-left[i]-1));
        }return ans;
    }
};