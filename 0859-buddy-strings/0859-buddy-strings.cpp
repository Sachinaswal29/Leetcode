class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        if(s==goal) return (set<char>(s.begin(), s.end()).size() < s.size());
        vector<int>index;
        for(int i=0;i<s.size();i++){
            if(s[i]!=goal[i]) index.push_back(i);
        }
        if(index.size()!=2) return false;
        swap(s[index[0]],s[index[1]]);
        return s==goal;
    }
};