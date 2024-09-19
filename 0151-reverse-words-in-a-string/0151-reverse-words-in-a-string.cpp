class Solution {
public:
    string reverseWords(string s) {
        string word="";
        stringstream ss(s);
        string tmp;
        while (ss >> tmp){
            word=tmp+" "+word;
        }
        word.pop_back();
        return word;
    }
};