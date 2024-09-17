class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>mp;
        stringstream ss1(s1);
        string tokens="";
        
        while(ss1>>tokens) mp[tokens]++;
        stringstream ss2(s2);
        
        while(ss2>>tokens) mp[tokens]++;
        
        vector<string>ans;
        for(auto& x:mp){
            if(x.second==1) ans.push_back(x.first);
        }return ans;
    }
};