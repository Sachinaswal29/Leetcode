class Solution {
public:
    string makeFancyString(string s) {
        string ans="";
        int freq=1;
        ans.push_back(s[0]);
        for(int i=1;i<s.size();i++){
            if(s[i]==ans.back()){
                freq++;
                if(freq<3) ans.push_back(s[i]);
            }else{
                ans.push_back(s[i]);
                freq=1;
            }
        }return ans;
    }
};