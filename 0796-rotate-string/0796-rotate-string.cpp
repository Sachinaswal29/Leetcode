class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return 0;
        string str=s+s;
        return str.find(goal)!=string::npos;
    }
};