class Solution {
public:
    int minimumLength(string s) {
        unordered_map<int,int>freq;
        for(auto ch:s) freq[ch]++;
        int minLen=0;
        for(auto x:freq){
            int count=x.second;
            while(count>=3) count-=2;
            minLen+=count;
        }
        return minLen;
    }
};