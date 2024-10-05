class Solution {
    bool checkEqual(vector<int>&a,vector<int>&b){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i]) return 0;
        }
        return 1;
    }

public:
    bool checkInclusion(string s1, string s2) {
        vector<int>count1(26,0);
        for(auto& x:s1) count1[x-'a']++;
        int i=0;
        int windowSize=s1.length();
        vector<int>count2(26,0);
    
        while(i<s2.length()){
            count2[s2[i]-'a']++;
            if(i>=windowSize){
                count2[s2[i-windowSize]-'a']--;
            }
            i++;
            if(checkEqual(count1,count2)) return 1;
        }
        return 0;
    }
};