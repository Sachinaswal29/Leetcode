class Solution {
public:
    string removeKdigits(string num, int k) {
        if(k==num.size()) return"0";
        string ans="";
        
        for(int i=0;i<num.size();i++){
            while(ans.size()>0 && ans.back()>num[i] && k>0){
                ans.pop_back();
                k--;
            }
            if(ans.size()>0 || num[i]!='0') ans.push_back(num[i]);
        }
        while(!ans.empty() && k--) ans.pop_back();
        return ans=="" ? "0" : ans;
    }
};