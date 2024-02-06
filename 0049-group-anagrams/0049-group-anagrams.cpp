class Solution {
public:
    string sortString(string s){
        vector<int>fre(26,0);
        for(auto i:s) fre[i-'a']++;
        string newString="";

        for(int i=0;i<26;i++){
            if(fre[i]>0){
                newString+=string(fre[i],i+'a');
            }
        }
        return newString;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>ans;

        for(auto i:strs){
            string sortedString=sortString(i);
            mp[sortedString].push_back(i);
        }
    
        for(auto i:mp){
           ans.push_back(i.second);
        }
        return ans;
    }
};