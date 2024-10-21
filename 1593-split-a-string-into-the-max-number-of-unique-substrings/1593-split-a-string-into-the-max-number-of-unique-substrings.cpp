class Solution {
public:
    void solve(string &s, int idx, unordered_set<string>& st, int& ans){
        if(idx==s.size()){
            int size=st.size();
            ans=max(ans,size);
            return;
        }

        string str="";
        for(int i=idx;i<s.size();i++){
            str.push_back(s[i]);
            if(!st.contains(str)){
                st.insert(str);
                solve(s,i+1,st,ans);
                st.erase(str);
            }
        }
    }

    int maxUniqueSplit(string s) {
        int ans=0;
        unordered_set<string>st;
        solve(s,0,st,ans);
        return ans;
    }
};