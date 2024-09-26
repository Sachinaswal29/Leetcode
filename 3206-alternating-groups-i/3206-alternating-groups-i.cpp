class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int n=colors.size(),ans=0;
        for(int i=0;i<n;i++){
            if(colors[(i-1+n)%n]!=colors[i] && colors[i]!=colors[(i+1)%n]) ans++;
        }return ans;
    }
};