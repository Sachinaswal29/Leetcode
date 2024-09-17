class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int>mp1,mp2;
        for(auto& s:words1) mp1[s]++;
        for(auto& s:words2) mp2[s]++;
        int count=0;
        for(int i=0;i<words1.size();i++){
            if(mp1[words1[i]]==1 && mp2[words1[i]]==1) count++;
        }return count;
    }
};