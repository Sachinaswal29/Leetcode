class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>v(26,0);
        int count=0;
        for(auto i:sentence){
            if(v[i-'a']==0){
              v[i-'a']++;
              count++;
            }
        }
        return count==26;
    }
};