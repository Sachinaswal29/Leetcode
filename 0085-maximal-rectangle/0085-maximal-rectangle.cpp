class Solution {
public:
    int maxRecArea(vector<int>& v){
        int n=v.size();
        stack<int>st;
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            while(!st.empty() && v[st.top()]>v[i]){
                int index=st.top();
                st.pop();
                if(!st.empty()) ans=max(ans,v[index]*(i-st.top()-1));
                else ans=max(ans,v[index]*i);
            }
            st.push(i);
        }
        while(!st.empty()){
            int index=st.top();
            st.pop();
            if(!st.empty()) ans=max(ans,v[index]*(n-st.top()-1));
            else ans=max(ans,v[index]*n);
        }
        return ans;
    }
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int>v(col,0);
        int ans=INT_MIN;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]=='1') v[j]++;
                else v[j]=0;
            }
            ans=max(ans,maxRecArea(v));
        }
        return ans;
    }
};