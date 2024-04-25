class Solution {
public:
    int longestIdealString(string s, int k) {
        int n=s.size();
        vector<int>v(26,0);
        int ans=0;
        for(int i=0;i<n;i++){
            int index=s[i]-'a';
            int left=max(0,index-k);
            int right=min(index+k,25);
            int maxi=INT_MIN;
            for(int range=left;range<=right;range++){
                maxi=max(maxi,v[range]);
            }
            v[index]=max(v[index],maxi+1);
            ans=max(ans,v[index]);
        } 
        return ans;
    }
};