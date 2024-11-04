class Solution {
public:
    string compressedString(string word) {
        int n=word.size();
        string ans="";
        int i=0;
        while(i<n){
            char ch=word[i];
            int freq=0;
            while(i<n && freq<9 && word[i]==ch){
                freq++;
                i++;
            }
            ans+=to_string(freq)+ch;
        }
        return ans;
    }
};