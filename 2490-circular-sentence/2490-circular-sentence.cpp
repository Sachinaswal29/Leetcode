class Solution {
public:
    bool isCircularSentence(string sentence) {
        stringstream ss(sentence);
        string temp="";
        vector<string>v;
        while(ss>>temp) v.push_back(temp);
        if(v.size()==1){
            if(sentence[0]!=sentence[sentence.size()-1]) return false;
        }
        for(int i=1;i<v.size();i++){
            string prev=v[i-1];
            string curr=v[i];
            if(prev[prev.size()-1]!=curr[0]) return false;
            if(i==v.size()-1 && v[i][v[i].size()-1]!=v[0][0]) return false;
        }
        return true;
    }
};