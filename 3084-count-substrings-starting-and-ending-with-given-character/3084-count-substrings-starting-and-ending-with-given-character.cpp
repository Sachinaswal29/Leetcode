class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long count=0;
        long long ans=0;
        for(auto ch:s){
            if(ch==c) ans+=1+count,count++;
        }
        return ans;
    }
};