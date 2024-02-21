class Solution {
public:
    vector<string>ans;
    int n;
    bool isValid(string s){
        if(s[0]=='0') return false;
        int num=stoi(s);
        return num<=255;
    }
    void solve(int idx, string &s, string temp,int parts){
        if(parts==4 && idx==n){
            temp.pop_back();
            ans.push_back(temp);
        }
        if(idx+1<=n) solve(idx+1,s,temp+s.substr(idx,1)+".",parts+1);
        if(idx+2<=n && isValid(s.substr(idx,2))) solve(idx+2,s,temp+s.substr(idx,2)+".",parts+1);
        if(idx+3<=n && isValid(s.substr(idx,3))) solve(idx+3,s,temp+s.substr(idx,3)+".",parts+1);
    }
    vector<string> restoreIpAddresses(string s) {
        n=s.size();
        if(n>12) return {};
        solve(0,s,"",0);
        return ans;
    }
};