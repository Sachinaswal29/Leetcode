class Solution {
private:
    void fill(string& s,vector<int>&count){
        for(auto ch:s) count[ch-'a']++;
    }
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int>count(26,0);
        fill(words[0],count);
        vector<string>ans;
        for(int i=1;i<words.size();i++){
            vector<int>temp(26,0);
            fill(words[i],temp);
            for(int j=0;j<26;j++){
                count[j]=min(count[j],temp[j]);
            }
        }
        for(int i=0;i<26;i++){
            int cnt=count[i];
            while(cnt--){
                ans.push_back(string(1,i+'a'));
            }
        }
        return ans;
    }
};