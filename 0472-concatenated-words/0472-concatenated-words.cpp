class Solution {
public:
    unordered_set<string>st;
    unordered_map<string,bool>mp;
    bool isConcat(string s){
        if(mp.find(s)!=mp.end()) return mp[s];
        for(int len=1;len<s.size();len++){
           if((st.find(s.substr(0,len))!=st.end() && st.find(s.substr(len))!=st.end()) || (st.find(s.substr(0,len))!=st.end() && isConcat(s.substr(len)))) return mp[s]=true;
        }return mp[s]=false;
    }

    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        vector<string>ans;
        for(auto &s:words) st.insert(s);
        for(auto &s:words){
            if(isConcat(s)) ans.push_back(s);
        }
        return ans;
    }
};