class Solution {
public:
    int findTheLongestSubstring(string s) {
        vector<int>vowel(5,0);
        unordered_map<string,int>mp;
        string currString="00000";
        mp[currString]=-1;
        int maxLen=0;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='a') vowel[0]=(vowel[0]+1)%2;
            if(s[i]=='e') vowel[1]=(vowel[1]+1)%2;
            if(s[i]=='i') vowel[2]=(vowel[2]+1)%2;
            if(s[i]=='o') vowel[3]=(vowel[3]+1)%2;
            if(s[i]=='u') vowel[4]=(vowel[4]+1)%2;

            currString="";
            for(auto& ch:vowel){
                currString+=to_string(ch);
            }

            if(mp.find(currString)!=mp.end()){
                maxLen=max(maxLen,i-mp[currString]);
            }else mp[currString]=i;
        }
        return maxLen;
    }
};