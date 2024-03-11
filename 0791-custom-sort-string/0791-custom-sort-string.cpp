class Solution {
public:
    string customSortString(string order, string s) {
        vector<int>freq(26,0);
        for(auto el:s) freq[el-'a']++;
        string ans="";
        for(auto el:order){
            while(freq[el-'a']-- > 0) ans.push_back(el);
        }
        for(int i=0;i<26;i++){
            while(freq[i]-- > 0) ans.push_back(i+'a');
        }
        return ans;
    }
};