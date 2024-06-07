class Solution {
public:
    string check(string& word, unordered_set<string>& st){
        for(int len=1;len<=word.size();len++){
            if(st.contains(word.substr(0,len))) return word.substr(0,len);
        }
        return word;
    }
    
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string>st(dictionary.begin(),dictionary.end());
        stringstream ss(sentence);
        string word="";
        string result="";
        while(getline(ss,word,' ')){
            result+=check(word,st)+" ";
        }
        result.pop_back();
        return result;
    }
};