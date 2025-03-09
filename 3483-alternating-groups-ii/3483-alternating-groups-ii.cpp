class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int n=colors.size();
        int len=0;
        int ans=0;
        for(int i=0;i<n+k-1;i++){
            if(colors[i%n]!=colors[(i-1+n)%n]) len++;
            else len=1;
            if(len>=k) ans++;
        }return ans;
    }
};